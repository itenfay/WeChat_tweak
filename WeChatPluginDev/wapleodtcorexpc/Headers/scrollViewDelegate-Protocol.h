//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol scrollViewDelegate <NSObject>

@optional
- (void)touchesCancelled_ScrollView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_ScrollView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_ScrollView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesBegan_ScrollView:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

