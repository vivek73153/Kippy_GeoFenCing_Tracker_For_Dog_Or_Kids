//
//  Copyright (c) 2013 Click'nTap SRL. All rights reserved.
//

#import "TapView.h"

@interface TapNetworkImageView : TapView {
  UIActivityIndicatorView* spinner;
  UIImageView* imageView;
}

- (id)initWithFrame:(CGRect)frame url:(NSString*)url;


-(UIImage*)image;

@end
