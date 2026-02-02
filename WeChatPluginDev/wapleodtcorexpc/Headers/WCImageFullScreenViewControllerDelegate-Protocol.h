//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCImageFullScreenViewController, WCMediaItem;

@protocol WCImageFullScreenViewControllerDelegate <NSObject>
- (void)onAnimateFadeOut;
- (void)onViewControllerAnimationHideWillStop;
- (void)onViewControllerAnimationHideStop;
- (void)fullScreenViewController:(WCImageFullScreenViewController *)arg1 didClickOriginalArticle:(WCMediaItem *)arg2;
- (void)fullScreenViewController:(WCImageFullScreenViewController *)arg1 didScrollFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)fullScreenViewControllerDidBePopedOrDismissed:(WCImageFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBePushedOrPresented:(WCImageFullScreenViewController *)arg1;
@end

