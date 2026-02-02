//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol MMTransparentButtonDelegate <NSObject>

@optional
- (void)MMTransparentButton_touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)MMTransparentButton_touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)MMTransparentButton_touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)MMTransparentButton_touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

