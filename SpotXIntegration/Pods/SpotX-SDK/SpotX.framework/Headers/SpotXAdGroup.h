//
//  SpotXAdGroup.h
//  SpotX
//

@import Foundation;
#import "SpotXTypes.h"
#import "SpotXAd.h"

@interface SpotXAdGroup : NSObject <NSFastEnumeration>

@property (nonatomic, readonly, nonnull) NSArray<SpotXAd*>* ads;

@end
