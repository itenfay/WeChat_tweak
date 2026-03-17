//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol MMLiveGestureRecognizerDelegate <NSObject>

@optional
- (void)onTouchesCancel:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)onTouchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)onTouchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

