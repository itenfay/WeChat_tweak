//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableArray, NSMutableDictionary, NSString, WCActionSheet, WCPlayerView;

@interface WAMediaPreviewViewController
{
    NSMutableDictionary *m_dicVideoView;
    WCPlayerView *m_currentPlayerView;
    NSMutableArray *m_mediaList;
    WCActionSheet *m_actionSheet;
    NSMutableDictionary *m_dicDownloadItem;
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool m_playAtOnce;
    NSMutableArray *m_tempPathList;
}

- (void).cxx_destruct;
- (void)onVideoPlay;
- (void)updateThumbImageAtIndex:(unsigned int)arg1;
- (id)tryGetThumbImageView:(id)arg1;
- (void)removeTempFiles;
- (void)addTempFilePath:(id)arg1;
- (void)updateCurrentPageFrame;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)getCurrentViewController;
- (id)convertWeAppVideo2FavItem:(id)arg1;
- (id)genVideoInfoWithMediaItem:(id)arg1;
- (id)genFavoriteItemWithMediaItem:(id)arg1;
- (id)genForwardMessageWrapWithMediaItem:(id)arg1;
- (void)forwardVideoOnGetAllData:(id)arg1;
- (void)forwardVideo:(id)arg1;
- (void)addToFavoritesOnGetAllData:(id)arg1;
- (void)addToFavorites:(id)arg1;
- (void)saveVideoOnGetAllData:(id)arg1;
- (void)saveVideo:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)fetchAllVideoDataWithMediaItem:(id)arg1 OperateType:(unsigned long long)arg2;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenSingleTap;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isCurrentPageVideo;
- (void)onChangePage;
- (struct CGRect)getFullscreenRect;
- (id)genErrorView;
- (void)configPlayerViewWithUrl:(id)arg1 playerInfo:(id)arg2 mediaWrap:(id)arg3;
- (id)createPlayerViewWithIndex:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (void)OnLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)playerViewAtPage:(unsigned int)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (_Bool)initMediaViewerWithSources:(id)arg1 current:(int)arg2 appId:(id)arg3 appScene:(unsigned long long)arg4 referer:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

