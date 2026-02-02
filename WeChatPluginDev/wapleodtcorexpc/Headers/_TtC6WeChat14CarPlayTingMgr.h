//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat14CarPlayTingMgr
{
    MISSING_TYPE *$__lazy_storage_$_tapeListController;
    MISSING_TYPE *$__lazy_storage_$_audioListController;
    MISSING_TYPE *nowPlayingController;
    MISSING_TYPE *recentPlayListCache;
    MISSING_TYPE *recentTapeDetailController;
    MISSING_TYPE *$__lazy_storage_$_discoverTapeMgr;
}

- (void).cxx_destruct;
- (void)onSelectedTabController:(id)arg1;
- (void)onCarPlayDisconnected;
- (void)onCarPlayConnected;
- (void)closeNowPlayingPlayerIfNeed;
- (id)getCurrentPlayingItem;
- (void)showNowPlayingController;
- (void)onEnterTapeDetailPageWithTapeItem:(id)arg1;
- (id)getAudioListController;
- (id)getTapeListController;
- (id)getRecommendTapeItem;
- (id)getListenLaterTapeItem;
- (id)safeGetCurrentTingPlayer;
- (void)dealloc;
- (id)init;

@end

