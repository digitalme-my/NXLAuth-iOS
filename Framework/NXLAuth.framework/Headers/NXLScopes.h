//
//  NXLScopes.h
//  NXLAuth
//
//  Created by Jason Lee on 30/10/2018.
//  Copyright © 2018 Jaosn Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

/*! @brief Scope that indicates this request is an OpenID Connect request.
 @see http://openid.net/specs/openid-connect-core-1_0.html#AuthRequestValidation
 */
extern NSString *const ScopeOpenID;

/*! @brief This scope value requests access to the End-User's default profile Claims, which are:
 name, family_name, given_name, middle_name, nickname, preferred_username, profile, picture,
 website, gender, birthdate, zoneinfo, locale, and updated_at.
 @see http://openid.net/specs/openid-connect-core-1_0.html#ScopeClaims
 */
extern NSString *const ScopeProfile;

/*! @brief This scope value requests access to the email and email_verified Claims.
 @see http://openid.net/specs/openid-connect-core-1_0.html#ScopeClaims
 */
extern NSString *const ScopeEmail;

/*! @brief This scope value requests access to the address Claim.
 @see http://openid.net/specs/openid-connect-core-1_0.html#ScopeClaims
 */
extern NSString *const ScopeAddress;

/*! @brief This scope value requests access to the phone_number and phone_number_verified Claims.
 @see http://openid.net/specs/openid-connect-core-1_0.html#ScopeClaims
 */
extern NSString *const ScopePhone;

/*! @brief This scope value requests refresh token.
 */
extern NSString *const ScopeOffline;
