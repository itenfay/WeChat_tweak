//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol WAAllTouchRecognizerDelegate <NSObject>

@optional
- (void)touchesGesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesGesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesGesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesGesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

