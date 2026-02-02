//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat29MagicWxGameDynamicCardService
{
    MISSING_TYPE *delegateMap;
    MISSING_TYPE *lastSendScrollTime;
    MISSING_TYPE *offsetHeight;
    MISSING_TYPE *handle;
    MISSING_TYPE *destroyTimeout;
    MISSING_TYPE *sendScrollInterval;
}

- (void).cxx_destruct;
- (id)init;
- (double)getWxGameDynamicCardOffsetTop:(id)arg1;
- (void)showMsgPopupMenu:(id)arg1;
- (_Bool)isVersionLatest:(id)arg1;
- (double)getOffsetHeight;
- (void)notifyViewScroll;
- (void)notifyExitChatRoom;
- (void)setChatRoomHeight:(double)arg1;
- (void)notifyEnterChatRoom;
- (double)getFrameSetCacheHeight:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onMainSessionExposeWithSessionInfo:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)notifyFrameSetSizeChange:(id)arg1 height:(long long)arg2;
- (void)setAppWxGameCardMessageViewDelegate:(id)arg1 delegate:(id)arg2;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)deActiveBiz;
- (void)removeFrameSetViewWithFrameSetName:(id)arg1;
- (void)addFrameSetViewWithContainerView:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)notifyBizDestroy;
- (void)createBiz;

@end

