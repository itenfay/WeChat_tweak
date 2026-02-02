//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTemplateListParams, NSString, UICollectionView, UILabel, UIView, WCFinderVideoTemplateSelectBasicViewModel;

@interface WCFinderTemplateSelectBasicViewController
{
    int _fromScene;
    UILabel *_templateTitleLabel;
    UILabel *_templateDescLabel;
    UIView *_playerView;
    UILabel *_noDataTipsLabel;
    UICollectionView *_collectionView;
    unsigned long long _currentSelectIndex;
    unsigned long long _enterTime;
    NSString *_traceId;
    WCFinderVideoTemplateSelectBasicViewModel *_viewModel;
    MJTemplateListParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTemplateListParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderVideoTemplateSelectBasicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) unsigned long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *noDataTipsLabel; // @synthesize noDataTipsLabel=_noDataTipsLabel;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UILabel *templateDescLabel; // @synthesize templateDescLabel=_templateDescLabel;
@property(retain, nonatomic) UILabel *templateTitleLabel; // @synthesize templateTitleLabel=_templateTitleLabel;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)createViewModel;
- (void)pauseVideo;
- (void)playVideo;
- (void)setupDisplayView;
- (void)onSwipe:(id)arg1;
- (void)onClickDone;
- (void)onClickCancel;
- (void)onVideoSelectVMFetchDataSuccessful;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)setupBasicUI;
- (void)setupGesture;
- (void)relayoutView;
- (void)reloadData;
- (void)reloadView;
- (_Bool)shouldFetchDataAfterViewDidLoad;
- (void)dealloc;
- (void)setupVM;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

