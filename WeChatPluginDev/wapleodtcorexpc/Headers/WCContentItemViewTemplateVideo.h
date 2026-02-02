//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString, WCMediaItem, WCSNSNodeVideoView;

@interface WCContentItemViewTemplateVideo
{
    WCSNSNodeVideoView *_videoView;
    ForwardMessageLogicController *m_forwardMsgLogic;
    WCMediaItem *m_oMediaItem;
    _Bool _shouldIgnoreLongPress;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)OnDownloadSuccessForFavoriteAdd;
- (id)getVisibleViewController;
- (void)showVideoView;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onMore:(id)arg1;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)OnSilencePlay;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)currentAutoPlayVideoWillChange;
- (void)setNonInteractive;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

