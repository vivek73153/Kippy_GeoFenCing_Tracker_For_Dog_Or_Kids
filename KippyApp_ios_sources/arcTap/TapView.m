//
//  Copyright (c) 2013 Click'nTap SRL. All rights reserved.
//

#import "TapView.h"
#import "TapUtils.h"
#import "AppDelegate.h"

@implementation TapView

@synthesize info;

-(AppDelegate*)app {
  return (AppDelegate *)[[UIApplication sharedApplication] delegate];
}

- (id)initWithDictionary:(NSDictionary*)dictionary {
    self = [super init];
    if (self) {
      self.info = dictionary;
    }
    return self;
}

-(void)dealloc {
  [[self app] cancelDownloadResource:self];
  [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)shakeView:(UIView *)viewToShake {
//  CABasicAnimation* anim = [CABasicAnimation animationWithKeyPath:@"transform.rotation"];
//  [anim setToValue:[NSNumber numberWithDouble:-M_PI_2/16]];
//  [anim setFromValue:[NSNumber numberWithDouble:M_PI_2/16]]; // rotation angle
//  [anim setDuration:0.1];
//  [anim setRepeatCount:3];
//  [anim setAutoreverses:YES];
//  [viewToShake.layer addAnimation:anim forKey:@"iconShake"];
}

-(int)y0 {
  return IS_IOS7?20:0;
}

@end
