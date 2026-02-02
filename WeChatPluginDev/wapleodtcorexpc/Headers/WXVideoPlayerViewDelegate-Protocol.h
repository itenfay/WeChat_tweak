//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol WXVideoPlayerViewDelegate <NSObject>
- (void)onWXVideoPlayerProgressBarHiddenChangeTo:(_Bool)arg1;

@optional
- (_Bool)isWrapInVisionOSWindow;
- (void)onDownloadVideoSuccess:(CMessageWrap *)arg1;
- (void)onReceiveVideoFinishMsg:(CMessageWrap *)arg1;
- (void)animateShowViewsWhenEndDrag;
- (double)updateBottomBarAndViews;
- (double)getBottomRightMargin;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onGetEMsgScene:(unsigned long long *)arg1;
- (_Bool)isShowEnterMpPageBtn:(CMessageWrap *)arg1;
- (void)onOpenBrandProfile:(CMessageWrap *)arg1;
- (void)onOpenBrandMpPage:(CMessageWrap *)arg1 enterIdForReport:(unsigned int)arg2;
- (void)onVideoPause:(CMessageWrap *)arg1;
- (void)onVideoPlay:(CMessageWrap *)arg1;
- (void)onVideoBlocked:(CMessageWrap *)arg1;
- (void)onWXVideoPlayerClickDetail:(CMessageWrap *)arg1;
- (void)isWXVideoPlayerPlayAttachVideo:(CMessageWrap *)arg1;
- (_Bool)isWXVideoPlayerDisplay:(CMessageWrap *)arg1;
@end

