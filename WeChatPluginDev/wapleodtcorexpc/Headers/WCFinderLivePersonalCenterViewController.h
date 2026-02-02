//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePersonalCenterPrepareInfo, FinderNewUserPrepareResponse, NSArray, NSString, UICollectionView, WCActionSheet, WCFinderCreateCoordinator, WCFinderCreateLiveViewModel, WCFinderLivePageStayReporter, WCFinderPersonalCenterLayout;

@interface WCFinderLivePersonalCenterViewController
{
    _Bool _isCompleCheck;
    _Bool _isClickStartLive;
    int _prepareRet;
    UICollectionView *_collectionView;
    WCFinderPersonalCenterLayout *_flowLayout;
    FinderNewUserPrepareResponse *_finderUserPrepare;
    FinderLivePersonalCenterPrepareInfo *_userInfo;
    WCFinderCreateCoordinator *_createCoordinator;
    WCActionSheet *_liveActionSheet;
    WCFinderCreateLiveViewModel *_createLiveVM;
    NSString *_prepareErrorString;
    NSString *_descriptionPromptWording;
    WCFinderLivePageStayReporter *_stayReporter;
    NSArray *_sectionInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(retain, nonatomic) WCFinderLivePageStayReporter *stayReporter; // @synthesize stayReporter=_stayReporter;
@property(nonatomic) _Bool isClickStartLive; // @synthesize isClickStartLive=_isClickStartLive;
@property(nonatomic) _Bool isCompleCheck; // @synthesize isCompleCheck=_isCompleCheck;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(retain, nonatomic) NSString *prepareErrorString; // @synthesize prepareErrorString=_prepareErrorString;
@property(nonatomic) int prepareRet; // @synthesize prepareRet=_prepareRet;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) WCActionSheet *liveActionSheet; // @synthesize liveActionSheet=_liveActionSheet;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) FinderLivePersonalCenterPrepareInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FinderNewUserPrepareResponse *finderUserPrepare; // @synthesize finderUserPrepare=_finderUserPrepare;
@property(retain, nonatomic) WCFinderPersonalCenterLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)creatorFunctionSectionCellDidSelect:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onFinderContactUpdate:(id)arg1;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCreateLiveNoticeWithInfo:(id)arg1 reporter:(id)arg2;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)showLiveNoticeWithLiveInfo:(id)arg1 reporter:(id)arg2;
- (void)realStartLive;
- (_Bool)showPrepareRequeestResult;
- (void)createLiveNoticeWithReporter:(id)arg1;
- (id)contact;
- (void)showLiveMemberNotice;
- (void)showLiveNoticeWithReporter:(id)arg1;
- (void)showLiveCreate;
- (void)showStartLiveActionSheet;
- (void)clickStartLive;
- (void)onStartLiveButtonClicked:(id)arg1;
- (id)getPaymentCellConfig;
- (unsigned long long)paidMicCount;
- (unsigned long long)purchasedCount;
- (unsigned long long)joinedMembershipCount;
- (unsigned long long)paidCollectionCount;
- (void)paymentInfoCellDidSelectLotteryRecord:(id)arg1;
- (void)paymentInfoCellDidSelectPurchasedRecord:(id)arg1;
- (void)paymentInfoCellDidSelectShoppingRecord:(id)arg1;
- (void)basicSettingCellDidClickSetting:(id)arg1;
- (void)basicSettingCellDidClickPrivacy:(id)arg1;
- (void)basicSettingCellDidClickReward:(id)arg1;
- (void)basicSettingCellDidClickMsg:(id)arg1;
- (id)getViewController;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)hasPaymentRecordSection;
- (void)refreshLiveUserPrepare;
- (void)reloadData;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

