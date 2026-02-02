//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TextStateCardListViewController, TextStateHistoryLogic, TextStateMessageBoxInfo, UICollectionView, UICollectionViewFlowLayout, UITapGestureRecognizer, UIView, _TtC6WeChat31TextStateFriendSquareTransition, _TtC6WeChat42TextStateSquareMixHeaderCollectionViewCell;

@interface TextStateFriendSquareViewController
{
    _Bool _hasRedDot;
    _Bool _enableCustomTransition;
    _Bool _needUpdateHistoryInfo;
    long long _scene;
    NSString *_sessionId;
    NSString *_sceneSessionId;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UIView *_noFriendView;
    NSMutableArray *_friendTopicList;
    NSMutableArray *_usernameList;
    NSMutableDictionary *_usernameToTextStateListDict;
    unsigned long long _enterTime;
    unsigned long long _beginIndex;
    NSString *_clusterPresentType;
    NSString *_ownTopicId;
    NSMutableSet *_unfoldTopicSet;
    unsigned long long _itemNumberPerRow;
    UITapGestureRecognizer *_tapGesture;
    _TtC6WeChat31TextStateFriendSquareTransition *_transition;
    TextStateMessageBoxInfo *_messageBoxInfo;
    TextStateCardListViewController *_cardListViewController;
    _TtC6WeChat42TextStateSquareMixHeaderCollectionViewCell *_mixHeaderCell;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateHistoryInfo; // @synthesize needUpdateHistoryInfo=_needUpdateHistoryInfo;
@property(retain, nonatomic) _TtC6WeChat42TextStateSquareMixHeaderCollectionViewCell *mixHeaderCell; // @synthesize mixHeaderCell=_mixHeaderCell;
@property(nonatomic) __weak TextStateCardListViewController *cardListViewController; // @synthesize cardListViewController=_cardListViewController;
@property(retain, nonatomic) TextStateMessageBoxInfo *messageBoxInfo; // @synthesize messageBoxInfo=_messageBoxInfo;
@property(nonatomic) _Bool enableCustomTransition; // @synthesize enableCustomTransition=_enableCustomTransition;
@property(retain, nonatomic) _TtC6WeChat31TextStateFriendSquareTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) unsigned long long itemNumberPerRow; // @synthesize itemNumberPerRow=_itemNumberPerRow;
@property(retain, nonatomic) NSMutableSet *unfoldTopicSet; // @synthesize unfoldTopicSet=_unfoldTopicSet;
@property(retain, nonatomic) NSString *ownTopicId; // @synthesize ownTopicId=_ownTopicId;
@property(retain, nonatomic) NSString *clusterPresentType; // @synthesize clusterPresentType=_clusterPresentType;
@property(nonatomic) unsigned long long beginIndex; // @synthesize beginIndex=_beginIndex;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSMutableDictionary *usernameToTextStateListDict; // @synthesize usernameToTextStateListDict=_usernameToTextStateListDict;
@property(retain, nonatomic) NSMutableArray *usernameList; // @synthesize usernameList=_usernameList;
@property(retain, nonatomic) NSMutableArray *friendTopicList; // @synthesize friendTopicList=_friendTopicList;
@property(retain, nonatomic) UIView *noFriendView; // @synthesize noFriendView=_noFriendView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *sceneSessionId; // @synthesize sceneSessionId=_sceneSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool hasRedDot; // @synthesize hasRedDot=_hasRedDot;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)shouldReloadCalendar;
- (void)shouldReloadCardList;
- (void)onTextStatePublished;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)registerYReportSdk;
- (void)onTextStateDeletedWithId:(id)arg1;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateFriendTopicConstruct;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (id)headImageViewFor:(id)arg1;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)count;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reportWithAction:(long long)arg1 iconId:(id)arg2 iconDescription:(id)arg3 iconType:(unsigned int)arg4 username:(id)arg5 userCount:(unsigned long long)arg6 topicInfos:(id)arg7 hasRedDot:(unsigned int)arg8 isSameTopic:(_Bool)arg9 duration:(unsigned long long)arg10;
- (void)reportWithAction:(long long)arg1 iconId:(id)arg2 iconDescription:(id)arg3 iconType:(unsigned int)arg4 username:(id)arg5 userCount:(unsigned long long)arg6 topicInfos:(id)arg7 isSameTopic:(_Bool)arg8 duration:(unsigned long long)arg9;
- (void)reportTapHeadImage:(id)arg1 friendTopic:(id)arg2;
- (void)reportTapAction:(long long)arg1 friendTopic:(id)arg2;
- (void)reportUnfoldFriendTopic:(id)arg1;
- (void)reportExit;
- (void)reportExposure;
- (unsigned int)sessionScene;
- (id)indexPathForUsername:(id)arg1;
- (_Bool)showMixHeaderCellInSection:(long long)arg1;
- (_Bool)showMixHeaderSection;
- (void)onTapMessageBox;
- (_Bool)hasRePublishCell;
- (_Bool)isTopInfoCellForSection:(long long)arg1;
- (long long)topInfoCellCount;
- (void)loadMessageBoxInfo;
- (void)doPublishWithScene:(unsigned int)arg1;
- (void)onTapRightBarButton;
- (void)onTapPublishButton;
- (void)onTap:(id)arg1;
- (void)jumpToCardListForUsername:(id)arg1;
- (void)doTapActionForSectionAtIndex:(long long)arg1;
- (_Bool)shouldFoldForSection:(long long)arg1;
- (unsigned long long)numberOfItemsPerRow;
- (void)dealValidTopicData;
- (void)updateData;
- (void)updateLayouts;
- (void)initGesture;
- (void)initView;
- (void)initData;
- (void)registerExtension;
- (id)navigationBarBackgroundColor;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, readonly) double mixHeaderHeight;
@property(nonatomic, readonly) TextStateHistoryLogic *historyLogic;
- (void)fillHeaderCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

