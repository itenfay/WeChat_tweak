//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, GCBaseCellModel, GCBaseScrollView, GCCollectionView, GCCollectionViewManager, GCCollectionViewSectionModel, GCGroupSectionModel, GCGroupServer, GCMyGroupCellExpandBtnView, GCViewHolderCellModel, GameChatNoticeAndMessageView, GetCanJoinChatroomResponse, GetFirstEnterInfoResponse, GetMyChatroomResponse, MyChatroomNotice, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UIView;

@interface GameLifeChatViewControllerV2
{
    _Bool _isInTab;
    _Bool _useAsChildVc;
    _Bool _needAddExpandSection;
    _Bool _isMyGroupSectionExpand;
    _Bool _isRecommendSectionEmpty;
    _Bool _showEntrance;
    _Bool _showInviteTipWhenViewDidAppear;
    _Bool _gcIsVisible;
    _Bool _hasServerResponse;
    unsigned int _sourceScene;
    GCBaseScrollView *_containerScrollView;
    GCCollectionView *_wholeCollectionView;
    GCCollectionViewManager *_collectionViewManager;
    GameChatNoticeAndMessageView *_noticeAndMessageView;
    GCCollectionViewSectionModel *_noticeAndMessageSectionModel;
    NSMutableDictionary *_groupCellDict;
    NSMutableArray *_allMyGroupItemArray;
    GCGroupSectionModel *_myGroupSectionModel;
    GCCollectionViewSectionModel *_bottomBtnSectionModel;
    GCCollectionViewSectionModel *_spaceBelowMyGroupSection;
    GCGroupSectionModel *_recommendSectionModel;
    GCBaseCellModel *_emptyCellViewModel;
    GCGroupServer *_groupServer;
    CLLocation *_groupRecommendLocation;
    UIView *_shadowView;
    GetFirstEnterInfoResponse *_firstEnterResponse;
    NSMutableSet *_didExitSet;
    GetCanJoinChatroomResponse *_canJoinGroupRespone;
    NSMutableArray *_recommeGroupCellArray;
    GetMyChatroomResponse *_myChatRoomResponse;
    GetCanJoinChatroomResponse *_canJoinChatRoomResponse;
    GCViewHolderCellModel *_findMoreCellModel;
    GCViewHolderCellModel *_groupRankCellModel;
    GCViewHolderCellModel *_myGroupCellExpandModel;
    UIButton *_createBtn;
    GetMyChatroomResponse *_needSaveResponse;
    MyChatroomNotice *_myChatRoomNotice;
    GCBaseCellModel *_noticeCellModel;
    GCMyGroupCellExpandBtnView *_floatingExpandBtnView;
    long long _myGroupCollapseCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long myGroupCollapseCount; // @synthesize myGroupCollapseCount=_myGroupCollapseCount;
@property(retain, nonatomic) GCMyGroupCellExpandBtnView *floatingExpandBtnView; // @synthesize floatingExpandBtnView=_floatingExpandBtnView;
@property(retain, nonatomic) GCBaseCellModel *noticeCellModel; // @synthesize noticeCellModel=_noticeCellModel;
@property(retain, nonatomic) MyChatroomNotice *myChatRoomNotice; // @synthesize myChatRoomNotice=_myChatRoomNotice;
@property(retain, nonatomic) GetMyChatroomResponse *needSaveResponse; // @synthesize needSaveResponse=_needSaveResponse;
@property(retain, nonatomic) UIButton *createBtn; // @synthesize createBtn=_createBtn;
@property(retain, nonatomic) GCViewHolderCellModel *myGroupCellExpandModel; // @synthesize myGroupCellExpandModel=_myGroupCellExpandModel;
@property(retain, nonatomic) GCViewHolderCellModel *groupRankCellModel; // @synthesize groupRankCellModel=_groupRankCellModel;
@property(retain, nonatomic) GCViewHolderCellModel *findMoreCellModel; // @synthesize findMoreCellModel=_findMoreCellModel;
@property(retain, nonatomic) GetCanJoinChatroomResponse *canJoinChatRoomResponse; // @synthesize canJoinChatRoomResponse=_canJoinChatRoomResponse;
@property(nonatomic) _Bool hasServerResponse; // @synthesize hasServerResponse=_hasServerResponse;
@property(retain, nonatomic) GetMyChatroomResponse *myChatRoomResponse; // @synthesize myChatRoomResponse=_myChatRoomResponse;
@property(retain, nonatomic) NSMutableArray *recommeGroupCellArray; // @synthesize recommeGroupCellArray=_recommeGroupCellArray;
@property(retain, nonatomic) GetCanJoinChatroomResponse *canJoinGroupRespone; // @synthesize canJoinGroupRespone=_canJoinGroupRespone;
@property(retain, nonatomic) NSMutableSet *didExitSet; // @synthesize didExitSet=_didExitSet;
@property(retain, nonatomic) GetFirstEnterInfoResponse *firstEnterResponse; // @synthesize firstEnterResponse=_firstEnterResponse;
@property(nonatomic) _Bool gcIsVisible; // @synthesize gcIsVisible=_gcIsVisible;
@property(nonatomic) _Bool showInviteTipWhenViewDidAppear; // @synthesize showInviteTipWhenViewDidAppear=_showInviteTipWhenViewDidAppear;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) CLLocation *groupRecommendLocation; // @synthesize groupRecommendLocation=_groupRecommendLocation;
@property(nonatomic) _Bool showEntrance; // @synthesize showEntrance=_showEntrance;
@property(retain, nonatomic) GCGroupServer *groupServer; // @synthesize groupServer=_groupServer;
@property(nonatomic) _Bool isRecommendSectionEmpty; // @synthesize isRecommendSectionEmpty=_isRecommendSectionEmpty;
@property(retain, nonatomic) GCBaseCellModel *emptyCellViewModel; // @synthesize emptyCellViewModel=_emptyCellViewModel;
@property(retain, nonatomic) GCGroupSectionModel *recommendSectionModel; // @synthesize recommendSectionModel=_recommendSectionModel;
@property(retain, nonatomic) GCCollectionViewSectionModel *spaceBelowMyGroupSection; // @synthesize spaceBelowMyGroupSection=_spaceBelowMyGroupSection;
@property(retain, nonatomic) GCCollectionViewSectionModel *bottomBtnSectionModel; // @synthesize bottomBtnSectionModel=_bottomBtnSectionModel;
@property(retain, nonatomic) GCGroupSectionModel *myGroupSectionModel; // @synthesize myGroupSectionModel=_myGroupSectionModel;
@property(retain, nonatomic) NSMutableArray *allMyGroupItemArray; // @synthesize allMyGroupItemArray=_allMyGroupItemArray;
@property(nonatomic) _Bool isMyGroupSectionExpand; // @synthesize isMyGroupSectionExpand=_isMyGroupSectionExpand;
@property(nonatomic) _Bool needAddExpandSection; // @synthesize needAddExpandSection=_needAddExpandSection;
@property(retain, nonatomic) NSMutableDictionary *groupCellDict; // @synthesize groupCellDict=_groupCellDict;
@property(retain, nonatomic) GCCollectionViewSectionModel *noticeAndMessageSectionModel; // @synthesize noticeAndMessageSectionModel=_noticeAndMessageSectionModel;
@property(retain, nonatomic) GameChatNoticeAndMessageView *noticeAndMessageView; // @synthesize noticeAndMessageView=_noticeAndMessageView;
@property(retain, nonatomic) GCCollectionViewManager *collectionViewManager; // @synthesize collectionViewManager=_collectionViewManager;
@property(retain, nonatomic) GCCollectionView *wholeCollectionView; // @synthesize wholeCollectionView=_wholeCollectionView;
@property(retain, nonatomic) GCBaseScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) _Bool useAsChildVc; // @synthesize useAsChildVc=_useAsChildVc;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
- (_Bool)shouldShowExpandBtn;
- (void)showOrHideFloatingExpandBtnIfNeed;
- (void)myGroupCellExpandBtn:(id)arg1 didClickWithChange:(_Bool)arg2;
- (id)supplementaryViewKindAtIndexPath:(id)arg1;
- (_Bool)shouldAddSpaceForNormalItemAtIndexPath:(id)arg1;
- (double)collectionViewLayout:(id)arg1 heightForSupplementaryViewAtIndexPath:(id)arg2;
- (struct CGSize)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (_Bool)shouldUseCustomLayoutForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)navigationBarBackgroundColor;
- (float)getTabBarHeight;
- (void)initRecommendGroup;
- (id)randomImageUrl;
- (void)initMyGroupSectionModel;
- (void)initTopNoticeAndMessageSection;
- (id)getNewSpaceSectionModel:(id)arg1 height:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)initContentView;
- (void)unRegisterExtension;
- (void)onViewPopHandle;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onGameLifeTabBarPoped:(id)arg1;
- (id)chatVcBackgroudColor;
- (void)updateGroupCellModel:(id)arg1 withMyChatRoomInfo:(id)arg2;
- (id)groupCellModelFromChatRoomInfo:(id)arg1;
- (id)groupCellModelArrayFrom:(id)arg1;
- (void)onRoomStatusUpdate:(id)arg1 isFromServer:(_Bool)arg2;
- (void)onCreateGroupBtnClick;
- (void)didAccountCancellationStateChange;
- (void)didJoinNewRoom:(id)arg1;
- (id)getThinBottomBtnSectionModel;
- (id)getNormalBottomBtnSectionModel;
- (void)resetCollectionViewManager;
- (_Bool)hasExpandBtnRedDot;
- (void)loadMyGroupSectionDisplayedItems;
- (void)removeTipCellModel;
- (id)getTipCellModel:(id)arg1;
- (void)onNoticeLinkClick:(id)arg1 contentBlock:(id)arg2;
- (void)onNoticeCloseBtnClick:(id)arg1;
- (id)btnModelWithJumpDetail:(id)arg1 posId:(unsigned long long)arg2;
- (id)getTopFixedSectionArrary;
- (void)reCreateReceommendSection;
- (void)doUpdateCanJoinGroupRespone:(id)arg1;
- (void)doUpdateChatRoomResponse:(id)arg1 isFromServer:(_Bool)arg2;
- (id)descAttributeFromResponse:(id)arg1;
- (void)retriveLocationIfAvailableWithComplectionBlock:(CDUnknownBlockType)arg1;
- (void)updateLocationAndReloadIfNeed;
- (void)readGroupCache;
- (void)onMyChatRoomStatusUpdate:(id)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (struct CGRect)getImgFrameWithIdentifier:(id)arg1;
- (void)onOpenChatRoomConfig:(id)arg1 cellModel:(id)arg2;
- (void)bannerStateDidChanged;
- (_Bool)isNoAutoExpand;
- (double)visiableHeight;
- (double)viewHeight;
- (void)viewNeedsLayout;
- (id)anotherPartScrollView;
- (id)bannerContainerView;
- (void)statusBarOrientationChange:(id)arg1;
- (void)handleAuthoriztionStatus:(int)arg1 requestNotDetermined:(_Bool)arg2;
- (void)onConfirmBtnClicked;
- (void)showGameChatInviteTipView:(id)arg1;
- (void)getRecommendGroup;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)enableGroupPause;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkShowInviteView;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
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

