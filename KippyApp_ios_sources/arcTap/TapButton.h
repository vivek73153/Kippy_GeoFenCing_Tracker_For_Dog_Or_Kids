//
//  Copyright (c) 2013 Click'nTap SRL. All rights reserved.
//

#import "TapView.h"

@interface TapButton : UIButton {
  UILabel* iconLabel;
}

- (id)initWithUnicode:(NSString*)unicode color:(UIColor*)color;
- (void)update:(NSString*)unicode color:(UIColor*)color;

@end
