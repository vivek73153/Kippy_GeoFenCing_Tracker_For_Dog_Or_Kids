//
//  Copyright (c) 2013 Click'nTap SRL. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AppDelegate;

@interface TapController : UIViewController {
}

-(void)idle;
-(AppDelegate*)app;

-(void)loadUi;
-(void)unloadUi;
-(void)needsSetupUi;
-(void)setupUi:(CGSize)size;
-(void)setupUiPortrait:(CGSize)size;
-(void)setupUiLandscape:(CGSize)size;
-(void)setupUiAnimated;
-(void)willSetupUiAnimated;
-(void)didSetupUiAnimated;
-(int)y0;

@end
