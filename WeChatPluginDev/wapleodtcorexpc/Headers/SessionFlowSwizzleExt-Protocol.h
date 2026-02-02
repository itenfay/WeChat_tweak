//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString;

@protocol SessionFlowSwizzleExt

@optional
- (void)onViewDidBeDismissed:(NSString *)arg1 withVC:(MMUIViewController *)arg2;
- (void)onViewDidBePresented:(NSString *)arg1 withVC:(MMUIViewController *)arg2;
- (void)onViewDidDisappear:(NSString *)arg1 withVC:(MMUIViewController *)arg2;
- (void)onViewDidAppear:(NSString *)arg1 withVC:(MMUIViewController *)arg2;
- (void)onViewDidBePoped:(NSString *)arg1 withVC:(MMUIViewController *)arg2;
- (void)onViewDidBePushed:(NSString *)arg1 withVC:(MMUIViewController *)arg2;
@end

