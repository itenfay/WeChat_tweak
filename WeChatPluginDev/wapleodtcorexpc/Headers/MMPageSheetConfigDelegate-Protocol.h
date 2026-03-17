//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPageSheetConfig, UIScrollView, UIView;

@protocol MMPageSheetConfigDelegate <NSObject>
- (void)onConfig:(MMPageSheetConfig *)arg1 changedFromEnableEdgeSlideToClose:(_Bool)arg2;
- (void)onConfig:(MMPageSheetConfig *)arg1 changedFromEnableDragToClose:(_Bool)arg2;
- (void)onConfig:(MMPageSheetConfig *)arg1 changedFromDragToCloseInstallScrollView:(UIScrollView *)arg2;
- (void)onConfigChanged:(MMPageSheetConfig *)arg1;
- (UIView *)getNavigationBarView;
- (double)getCurrentSceneWidth;
- (_Bool)isPageSheetPushIn:(MMPageSheetConfig *)arg1;
- (_Bool)isPageSheetVisible:(MMPageSheetConfig *)arg1;
- (_Bool)isAtFirstPage:(MMPageSheetConfig *)arg1;
@end

