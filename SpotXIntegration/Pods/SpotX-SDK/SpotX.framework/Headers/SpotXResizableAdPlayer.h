//
//  Copyright © 2017 SpotX, Inc. All rights reserved.
//

@import Foundation;

#import "SpotXAdPlayerBase.h"


/**
 `SpotXResizableAdPlayer` handles ad playback ad subview within some containing content.
 */
@interface SpotXResizableAdPlayer : SpotXAdPlayerBase

/**
 Create a Resizable AdPlayer
 */
-(instancetype)initInView:(UIView *)parent;

-(void)setSize:(float)size;

@end
