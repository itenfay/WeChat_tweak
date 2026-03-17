//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIEvent;

@protocol ClickStatSwizzleExt

@optional
+ (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(UIEvent *)arg4;
+ (void)onSendEvent:(UIEvent *)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(UIEvent *)arg4;
- (void)onSendEvent:(UIEvent *)arg1;
@end

