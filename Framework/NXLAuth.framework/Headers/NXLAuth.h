//
//  NXLAuth.h
//  NXLAuth
//
//  Created by Jason Lee on 30/10/2018.
//  Copyright © 2018 Jaosn Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for NXLAuth.
FOUNDATION_EXPORT double NXLAuthVersionNumber;

//! Project version string for NXLAuth.
FOUNDATION_EXPORT const unsigned char NXLAuthVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <NXLAuth/PublicHeader.h>
#import <NXLAuth/NXLAppAuthManager.h>
#import <NXLAuth/NXLScopes.h>

/*! @mainpage NXLAuth for iOS
 
 @section introduction Introduction
 
 NXLAuth for iOS is a client SDK for communicating with [OAuth 2.0]
 (https://tools.ietf.org/html/rfc6749) and [OpenID Connect]
 (http://openid.net/specs/openid-connect-core-1_0.html) providers. It strives to
 directly map the requests and responses of those specifications, while following
 the idiomatic style of the implementation language. In addition to mapping the
 raw protocol flows, convenience methods are available to assist with common
 tasks like performing an action with fresh tokens.
 
 It follows the best practices set out in
 [RFC 8252 - OAuth 2.0 for Native Apps](https://tools.ietf.org/html/rfc8252)
 including using `SFAuthenticationSession` and `SFSafariViewController` on iOS
 for the auth request. `UIWebView` and `WKWebView` are explicitly *not*
 supported due to the security and usability reasons explained in
 [Section 8.12 of RFC 8252](https://tools.ietf.org/html/rfc8252#section-8.12).
 
 It also supports the [PKCE](https://tools.ietf.org/html/rfc7636) extension to
 OAuth which was created to secure authorization codes in public clients when
 custom URI scheme redirects are used. The library is friendly to other
 extensions (standard or otherwise) with the ability to handle additional params
 in all protocol requests and responses.
 
 <b>Homepage</b>: https://nexlife.github.io/NXLAuth-iOS/ <br>
 <b>API Documentation</b>: https://nexlife.github.io/NXLAuth-iOS/doc/html/ <br>
 <b>Git Repository</b>: https://github.com/openid/AppAuth-iOS <br>
 
 */




