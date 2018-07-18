//
//  SpotXAd.h
//  SpotX
//

@import Foundation;

@interface SpotXAd : NSObject

@property (nonatomic, readonly, nonnull) NSNumber *index;
@property (nonatomic, readonly, copy, nonnull) NSString *id;
@property (nonatomic, readonly, copy, nonnull) NSString *vpi;
@property (nonatomic, readonly, copy, nonnull) NSString *title;
@property (nonatomic, readonly, nonnull) NSNumber *duration;
@property (nonatomic, readonly, nonnull) NSNumber *price;
@property (nonatomic, readonly, copy, nonnull) NSString *url;
@property (nonatomic, readonly, copy, nonnull) NSString *clickthru;

@end
