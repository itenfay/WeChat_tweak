//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WACustomLoadingViewController;

@protocol WACustomLoadingViewControllerDelegate <NSObject>
- (_Bool)isSheetModeExpandedToStatusBarTop;
- (_Bool)isEmbedModeExpandedToFullScreen;
- (_Bool)canExpandToStatusBarTop;
- (unsigned long long)capsuleMenuType;
- (_Bool)isRunningInSheetMode;
- (void)onCustomLoadingVCViewSizeTransitionComplete:(WACustomLoadingViewController *)arg1;
- (void)onCustomLoadingVCViewSizeTransitionStart:(WACustomLoadingViewController *)arg1;
- (void)onCustomLoadingVCRequestFullScreen:(WACustomLoadingViewController *)arg1;
@end

