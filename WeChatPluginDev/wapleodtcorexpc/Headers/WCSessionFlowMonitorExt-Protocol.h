//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, UIEvent, UITapGestureRecognizer, UIViewController;

@protocol WCSessionFlowMonitorExt <NSObject>

@optional
- (void)onGesture:(UITapGestureRecognizer *)arg1 withTarget:(NSString *)arg2 withAction:(NSString *)arg3;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(UIEvent *)arg4;
- (void)onSendEvent:(UIEvent *)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onTabDisappear:(UIViewController *)arg1;
- (void)onTabAppear:(UIViewController *)arg1;
- (void)onDisappearPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterPage:(NSString *)arg1 withVC:(MMUIViewController *)arg2 withHashCode:(unsigned long long)arg3;
@end

