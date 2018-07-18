//
//  Copyright © 2017 SpotX, Inc. All rights reserved.
//

@import Foundation;
@import UIKit;

#ifndef SpotX_h
#define SpotX_h

/*!
 *  Project version number for SpotX.
 */
FOUNDATION_EXPORT double SpotXVersionNumber;

/*!
 *  Project version string for SpotX.
 */
FOUNDATION_EXPORT const unsigned char SpotXVersionString[];


// Need to include all of our public interfaces here,
// So that they are exported in the framework.
#import "SpotXTypes.h"
#import "SpotXAd.h"
#import "SpotXAdGroup.h"
#import "SpotXAdPlayer.h"
#import "SpotXAdRequest.h"
#import "SpotXAdPlayerBase.h"
#import "SpotXInlineAdPlayer.h"
#import "SpotXInterstitialAdPlayer.h"
#import "SpotXResizableAdPlayer.h"


/*!
 *  SpotX is the entry point for the SpotX SDK.
 */
@interface SpotX : NSObject

/*!
 *  Sets the default API key for use with new requests.
 *  You can also specify the key on a per-request basis.
 */
+ (nullable NSString *)apiKey;
+ (void)setAPIKey:(nullable NSString*)newApiKey;

/*!
 *  Enables debug print statements to the xcode console.
 *  Defaults to NO
 */
+ (BOOL)debugMode;
+ (void)debugMode:(BOOL)on;

/*!
 *  @return Current marketing version
 */
+ (nonnull NSString *)version;

@end

#endif /* SpotX_h */
