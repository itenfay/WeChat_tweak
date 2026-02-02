//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCDataItem, WCImageView, WCMediaItem;

@interface WCContentItemViewTemplateHotImage
{
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    WCImageView *m_oWCCoverImage;
    NSMutableArray *m_arrMediaItem;
    NSMutableArray *m_arrImageView;
    NSMutableSet *_setViewMediaIndex;
    unsigned long long _viewInitIndex;
    NSMutableSet *_setScaleOutMediaIndex;
    NSMutableSet *_setScaleInMediaIndex;
    unsigned int _loadedStartTime;
    unsigned int _loadedEndTime;
    NSMutableDictionary *_dicMediaStartTime;
    NSMutableDictionary *_dicMediaEndTime;
    NSMutableArray *_arrNeedLogMediaID;
    NSMutableArray *_arrPreloadMediaID;
    NSMutableArray *_arrDownloadMediaID;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)deleteFullScreeImageViews;
- (void)initFullScreeImageViews;
- (void)deleteFullScreenData;
- (void)initFullScreenData;
- (void)onCloseCanvasPageView;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (id)genLogStrWithIndexSet:(id)arg1;
- (void)tryLogClickBigImage;
- (void)tryLogThumbImageLoadedEffiency:(_Bool)arg1;
- (void)hideMenu;
- (void)onDownloadFinish:(id)arg1;
- (void)onClickWCCanvasImage:(id)arg1;
- (id)currentViewController;
- (void)onClickWCImage:(id)arg1 needEdit:(_Bool)arg2 From3DTouch:(_Bool)arg3;
- (void)onClickWCImageFrom3DTouch:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onLongTouch;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

