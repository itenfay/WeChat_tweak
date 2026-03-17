//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol WindowDelegate <NSObject>

@optional
- (void)touchesCancelled_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

