//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderFeedFlowView, WCFinderMusicTopicPageViewModel, WCFinderPostMgr, WCFinderTopicRouteParams;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderMusicTopicPageViewManagerDelegate;

@interface WCFinderMusicTopicPageViewManager : NSObject
{
    id <WCFinderMusicTopicPageViewManagerDelegate> _delegate;
    WCFinderMusicTopicPageViewModel *_viewModel;
    WCFinderFeedFlowView *_feedFlowView;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
    WCFinderTopicRouteParams *_params;
    WCFinderPostMgr *_postMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPostMgr *postMgr; // @synthesize postMgr=_postMgr;
@property(retain, nonatomic) WCFinderTopicRouteParams *params; // @synthesize params=_params;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderMusicTopicPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderMusicTopicPageViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)postMgrGetExtStatsReportStrValue;
- (id)getRefDataItemForExtStatsReport;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(id)arg2;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrGetMusicInfo;
- (_Bool)postMgrEnableOpenAlbum:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)genMusicDataProvider;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (void)finderEventNoMoreData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventReloadAllData;
- (void)finderMusicFetchListSucPullType:(unsigned long long)arg1 innerTabType:(int)arg2 dataArray:(id)arg3;
- (void)finderMusicUploadSuc;
- (void)finderEventFeedOrderChanged;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)routerListDetailViewController:(id)arg1 indexPath:(id)arg2 shouldSetFeedRingtone:(_Bool)arg3;
- (void)enterCurFeedFlowView:(_Bool)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedFlowViewUseDefaultCellConfig;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (unsigned long long)genFeedTagTypeFromContentVM:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 leftTopBadgeContent:(id)arg2;
- (_Bool)isOriginalContactFromUsername:(id)arg1;
- (_Bool)finderFeedFlowViewNeedCornerRadius;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)openPostAlbum;
- (void)openPostCameraByEnterChildScene:(unsigned long long)arg1;
- (void)showPostEntryByMusicInfo:(id)arg1 musicIdPrefix:(id)arg2 enterChildScene:(unsigned long long)arg3;
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 view:(id)arg3 InViewController:(id)arg4 byPassInfo:(id)arg5 musicInfo:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

