//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIWindow, NSString, WCNetworkMediaPlayer, WCNetworkMediaStreamVideoInfo;

@interface WebviewJSEventHandler_streamingVideoPlay
{
    MMUIWindow *m_fullScreenWindow;
    WCNetworkMediaPlayer *m_player;
    WCNetworkMediaStreamVideoInfo *m_streamVideoInfo;
    _Bool m_needReportData;
    _Bool m_needHiddenMoreMenu;
}

- (void).cxx_destruct;
- (_Bool)needHiddenMoreMenu;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onEndPlayer;
- (void)onPausePlayer;
- (void)onStartPlayer;
- (void)onClosePlayer;
- (void)logVideoClick:(unsigned int)arg1;
- (void)logVideoPlay:(unsigned int)arg1;
- (id)getSSIDAndBSSID;
- (id)getClickLogWithClickType:(unsigned int)arg1;
- (id)getPlayLogWithPlayType:(unsigned int)arg1;
- (id)getStatExtStr;
- (void)webViewReturn:(id)arg1;
- (void)notifyWebViewReturn;
- (void)exitPlayWindow;
- (void)jumpToDetail:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

