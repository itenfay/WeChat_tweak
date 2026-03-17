//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCDataItem;

@protocol WCContentItemViewExt

@optional
- (void)onWCCanvasContentItemViewExisAnimationFinish;
- (void)onWCCanvasContentItemViewOutFullScreen:(WCDataItem *)arg1;
- (void)onWCCanvasContentItemViewInFullScreen:(WCDataItem *)arg1;
- (void)onWCContentItemViewOutFullScreenAnimationComplete;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCContentItemViewInFullScreen;
- (void)onWCContentItemViewWillEnterFullScreen;
- (void)onWCContentItemViewInteractedByUser:(WCDataItem *)arg1 sender:(id)arg2;
- (void)onWCContentItemViewOpenedWebViewUseFastLoad:(WCDataItem *)arg1;
- (void)onWCContentItemViewExposeMenu:(WCDataItem *)arg1 scene:(long long)arg2;
- (void)onWCContentItemViewMoreMenu:(WCDataItem *)arg1 sender:(id)arg2;
@end

