//
//  Copyright © 2017 SpotX, Inc. All rights reserved.
//

@import Foundation;

#import "SpotXAdPlayerBase.h"


/**
 `SpotXInlineAdPlayer` handles ad playback ad subview within some containing content.
 */
@interface SpotXInlineAdPlayer : SpotXAdPlayerBase

/**
 Create a Inline AdPlayer
 */
-(instancetype)initInView:(UIView *)parent;

@end
