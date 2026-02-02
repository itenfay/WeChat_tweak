//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UIView, WCFinderCreateCoordinator, WCFinderLiveNearbyReporter, WCFinderNearbyTabPageCacheModel, WCFinderNearbyTabPageViewModel, WCFinderRedDotCtrlInfo, WCFinderTabPageModel;
@protocol WCFinderNearbyTabPageViewControllerDelegate;

@interface WCFinderNearbyTabPageViewController
{
    _Bool _directlyOpenJumpInfoPage;
    _Bool _isLocationServiceAuthrized;
    CDUnknownBlockType _cacheModelUpdateBlock;
    WCFinderRedDotCtrlInfo *_nearbyLiveEntryRedDotCtrlInfo;
    id <WCFinderNearbyTabPageViewControllerDelegate> _delegate;
    MMUIButton *_nearbyPeopleMoreButton;
    UIView *_placeHolderView;
    NSMutableArray *_childModelArray;
    WCFinderTabPageModel *_liveTabPageModel;
    WCFinderTabPageModel *_feedTabPageModel;
    WCFinderTabPageModel *_peopleTabPageModel;
    WCFinderCreateCoordinator *_createCoordinator;
    WCFinderLiveNearbyReporter *_reporter;
    unsigned long long _initSelectedType;
    unsigned long long _currentSelectedType;
    WCFinderNearbyTabPageCacheModel *_cacheModel;
    unsigned long long _selectedSubTabId;
    WCFinderNearbyTabPageViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNearbyTabPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long selectedSubTabId; // @synthesize selectedSubTabId=_selectedSubTabId;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(retain, nonatomic) WCFinderNearbyTabPageCacheModel *cacheModel; // @synthesize cacheModel=_cacheModel;
@property(nonatomic) unsigned long long currentSelectedType; // @synthesize currentSelectedType=_currentSelectedType;
@property(nonatomic) unsigned long long initSelectedType; // @synthesize initSelectedType=_initSelectedType;
@property(retain, nonatomic) WCFinderLiveNearbyReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) WCFinderTabPageModel *peopleTabPageModel; // @synthesize peopleTabPageModel=_peopleTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *feedTabPageModel; // @synthesize feedTabPageModel=_feedTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *liveTabPageModel; // @synthesize liveTabPageModel=_liveTabPageModel;
@property(retain, nonatomic) NSMutableArray *childModelArray; // @synthesize childModelArray=_childModelArray;
@property(retain, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) MMUIButton *nearbyPeopleMoreButton; // @synthesize nearbyPeopleMoreButton=_nearbyPeopleMoreButton;
@property(nonatomic) __weak id <WCFinderNearbyTabPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool directlyOpenJumpInfoPage; // @synthesize directlyOpenJumpInfoPage=_directlyOpenJumpInfoPage;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *nearbyLiveEntryRedDotCtrlInfo; // @synthesize nearbyLiveEntryRedDotCtrlInfo=_nearbyLiveEntryRedDotCtrlInfo;
@property(copy, nonatomic) CDUnknownBlockType cacheModelUpdateBlock; // @synthesize cacheModelUpdateBlock=_cacheModelUpdateBlock;
- (void)registerYReportSdk;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)checkAbnormalLiveIfNeeded;
- (void)onFinderGetLiveTabsInfoFinished;
- (void)onPeopleNearbyWillGoBackToRootView;
- (_Bool)switchToLiveTab;
- (_Bool)shouldInteractivePop;
- (void)willDisappear;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
- (void)resetLiveTabBlock;
- (void)_openJumpInfoPageWithCtrlInfo:(id)arg1;
- (void)updateLiveTabName;
- (void)updateFeedTabName;
- (long long)indexOfTabPageType:(unsigned long long)arg1;
- (void)startLive;
- (void)onClickMoreItem;
- (void)setLiveVCSelectSubTab:(id)arg1;
- (void)genChildModelArray;
- (void)_restoreTabPage;
- (void)refreshTabPage;
- (void)onBackButtonClicked:(id)arg1;
- (id)getNearbyPeopleViewController;
- (void)setRedDotModeObjectID:(id)arg1;
- (void)setRightButtonItemWithPageModel:(id)arg1;
- (void)updateLastestSelectedIndex:(unsigned long long)arg1;
- (unsigned int)getNearbyTabType;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(_Bool)arg3;
- (void)setSelectVCIndex:(unsigned long long)arg1;
- (int)getCurrenSelectCommentScene;
- (void)switchToInitSeletedIndex;
- (id)cacheViewModel;
- (void)viewDidLoad;
- (id)initWithLiveCacheModel:(id)arg1 selectedType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

