//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPageSheetConfig, MMUIViewController, UIView, UIViewController;
@protocol MMPageSheetContainer, MMPageSheetProvider;

@protocol MMPageSheetProvider <NSObject>
- (void)pushPageSheet:(id <MMPageSheetProvider>)arg1 animated:(_Bool)arg2;
- (void)pushPageSheet:(id <MMPageSheetProvider>)arg1;
- (void)showFromViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)showInView:(UIView *)arg1 animated:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (MMUIViewController *)pageSheetProviderController;
- (void)didPushSelfInPage:(id <MMPageSheetProvider>)arg1;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (UIView *)pageSheetContentView;

@optional
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onPageSheetContainerBgTapped;
- (id <MMPageSheetContainer>)pageSheetContainer;
- (UIViewController *)adaptedViewController;
- (MMPageSheetConfig *)pageSheetConfig;
- (void)pageSheetPresentAnimateDidEnd;
- (void)pageSheetPresentAnimateWillBegin;
- (void)pageSheetDidRotation;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillAppear;
@end

