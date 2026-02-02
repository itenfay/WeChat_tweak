//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol MMPageSheetProvider, MMPageSheetProvider><MMPageSheetContainerDelegate;

@protocol MMPageSheetContainer <NSObject>
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)popPageSheetTo:(id <MMPageSheetProvider>)arg1 animated:(_Bool)arg2;
- (void)popPageSheetWithAnimated:(_Bool)arg1;
- (void)pushPageSheet:(id <MMPageSheetProvider>)arg1 animated:(_Bool)arg2;
- (void)updateContentHeightWithAnimated:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showPageSheetAnimated:(_Bool)arg1 parentView:(UIView *)arg2 parentViewController:(UIViewController *)arg3 complete:(void (^)(void))arg4;
- (void)setupWithProvider:(id <MMPageSheetProvider><MMPageSheetContainerDelegate>)arg1;

@optional
- (UIView *)pageSheetContainerView;
@end

