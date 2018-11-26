//
//  NXLAppAuthManager.h
//  NXLAuth
//
//  Created by Jason Lee on 30/10/2018.
//  Copyright © 2018 Jaosn Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppAuth/AppAuth.h>

@class OIDAuthState;
@class OIDServiceConfiguration;

/*! @brief Represents Nextlife App Auth Manager.
 */
@interface NXLAppAuthManager : NSObject <OIDAuthStateChangeDelegate>


/*! @brief A convenience class that retains the auth state.
 */
@property(nonatomic, strong, nullable) OIDAuthState *authState;

// get Authorization Request URL
/*! @brief Creates an authorization request with opinionated defaults (a secure @c state, and
 PKCE with S256 as the @c code_challenge_method).
 @brief configure your client identifier and client's redirect URI in the configuration.plist
 @param scopes An array of scopes to combine into a single scope string per the OAuth2 spec.
 @remarks This convenience initializer generates a state parameter and PKCE challenges
 automatically.
 */
- (void)authRequest:(nullable NSArray<NSString *> *)scopes :(void (^)(OIDAuthorizationRequest *request))completion;

// perform Authorization Request
/*! @brief Convenience method to create a @c OIDAuthState by presenting an authorization request from ssoAuthRequest method
 and performing the authorization code exchange in the case of code flow requests. For
 the hybrid flow, the caller should validate the id_token and c_hash, then perform the token
 request (@c OIDAuthorizationService.performTokenRequest:callback:)
 and update the OIDAuthState with the results (@c
 OIDAuthState.updateWithTokenResponse:error:).
 @param authorizationRequest The authorization request to present.
 @param presentingViewController The view controller from which to present the
 @c SFSafariViewController.
 @param completion The method called when the request has completed or failed.
 @return A @c OIDExternalUserAgentSession instance which will terminate when it
 receives a @c OIDExternalUserAgentSession.cancel message, or after processing a
 @c OIDExternalUserAgentSession.resumeExternalUserAgentFlowWithURL: message.
 */
- (id<OIDExternalUserAgentSession>)authStateByPresentingAuthorizationRequest:(OIDAuthorizationRequest *)authorizationRequest presentingViewController:(UIViewController *)presentingViewController callback:(OIDAuthStateAuthorizationCallback)completion;

// get fresh token
/*! @brief Calls the block with a valid access token (refreshing it first, if needed), or if a
 refresh was needed and failed, with the error that caused it to fail.
 @param action The block to execute with a fresh token. This block will be executed on the main
 thread.
 @param completion Return a valid access token, id token and current auth state.
 */
- (void)getFreshToken :(void (^)(NSString *_Nonnull accessToken, NSString *_Nonnull idToken, OIDAuthState *currentAuthState, NSError *_Nullable error))completion;

/*! @brief Clear SDK Auth State.
 */
- (void)clearAuthState;

// get User Info
/*! @brief a simple method to return user information based on the valid access token. Refreshing token if needed.
 @param completion Return user information.
 */
- (void)getUserInfo :(void (^)(NSDictionary* response))completion;

// logout
- (void)logOut;

//- (id<OIDExternalUserAgentSession>)takeMultipleImagesWithCompletion:(OIDAuthorizationRequest *)authorizationRequest presentingViewController:(UIViewController *)presentingViewController
//                                                           callback:(OIDAuthStateAuthorizationCallback)callback;


@end
