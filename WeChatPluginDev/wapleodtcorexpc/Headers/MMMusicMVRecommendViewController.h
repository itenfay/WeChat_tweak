//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicLiveCGIMgr, MMMusicMVModel, MMMusicMVRecommendAnimationLoadingView, MMMusicMVRecommendHeaderView, MMMusicMVRecommendTableCell, NSData, NSMutableArray, NSString, UIButton, UILabel, UIPanGestureRecognizer, UITableView, UIView, WCFinderLastestPlayVideoInfoMgr;
@protocol MMMusicMVRecommendViewControllerDataSource;

@interface MMMusicMVRecommendViewController
{
    NSData *_lastBuff;
    NSString *_bgmSource;
    WCFinderLastestPlayVideoInfoMgr *_lastestBgmPlayVideoInfoMgr;
    MMMusicMVModel *_currentModel;
    MMMusicMVRecommendTableCell *_activedCell;
    UITableView *_tableView;
    UIView *_containerView;
    UIButton *_backgroundButton;
    MMMusicMVRecommendHeaderView *_headerView;
    UIPanGestureRecognizer *_panGesture;
    UILabel *_stateTipsLabel;
    _Bool _needInternalLoadData;
    _Bool _isInternalLoading;
    id <MMMusicMVRecommendViewControllerDataSource> _dataSource;
    CDUnknownBlockType _switchBlock;
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    CDUnknownBlockType _closeVCBlock;
    MMMusicMVRecommendAnimationLoadingView *_loadingView;
    MMMusicLiveCGIMgr *_cgiMgr;
    NSMutableArray *_internalLoadMvModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *internalLoadMvModels; // @synthesize internalLoadMvModels=_internalLoadMvModels;
@property(nonatomic) _Bool isInternalLoading; // @synthesize isInternalLoading=_isInternalLoading;
@property(retain, nonatomic) MMMusicLiveCGIMgr *cgiMgr; // @synthesize cgiMgr=_cgiMgr;
@property(nonatomic) _Bool needInternalLoadData; // @synthesize needInternalLoadData=_needInternalLoadData;
@property(retain, nonatomic) MMMusicMVRecommendAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType closeVCBlock; // @synthesize closeVCBlock=_closeVCBlock;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(nonatomic) __weak id <MMMusicMVRecommendViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MMMusicMVModel *currentModel; // @synthesize currentModel=_currentModel;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(_Bool)arg2 requestId:(id)arg3;
- (void)onClickWithCell:(id)arg1;
- (void)scrollCommentToTop;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (_Bool)hidesStatusBar;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)onClickCloseButton;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)close:(CDUnknownBlockType)arg1;
- (void)updateHeaderView;
- (void)internalReloadData;
- (void)reload;
- (void)addNoVideoStateTips;
- (void)stopVCLoading;
- (void)startVCLoading;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) UITableView *tableView;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property(readonly, nonatomic) MMMusicMVRecommendHeaderView *headerView;
@property(readonly, nonatomic) UIView *containerView;
- (id)stateTipsLabel;
@property(readonly, nonatomic) UIButton *backgroundButton;
- (void)dealloc;
- (id)initWithModel:(id)arg1 needInternalLoadData:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

