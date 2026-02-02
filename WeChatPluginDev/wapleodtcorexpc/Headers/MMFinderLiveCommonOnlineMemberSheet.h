//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCommonOnlineMemberSheetOpenParams, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIActivityIndicatorView, MMUIImageView, NSMutableArray, NSString, RichTextView, UICollectionView, UIScrollView, UIView, WCPinBottomCollectionViewFlowLayout;
@protocol MMLiveOnlineStateViewDelegate;

@interface MMFinderLiveCommonOnlineMemberSheet
{
    unsigned int _boardMemberCount;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveCommonOnlineMemberSheetOpenParams *_openParams;
    id <MMLiveOnlineStateViewDelegate> _delegate;
    NSMutableArray *_userList;
    unsigned long long _titleHeatValue;
    MMUIImageView *_backgroundView;
    MMUIActivityIndicatorView *_onlineContentLoadingView;
    UIScrollView *_tabScrollView;
    NSMutableArray *_tabPositions;
    NSMutableArray *_tabLabels;
    UIView *_tabIndicatorView;
    UICollectionView *_onlineUsersCollectionView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    RichTextView *_noUserLabel;
    unsigned long long _currentSelectIndex;
    WCPinBottomCollectionViewFlowLayout *_onlineUsersCollectionLayout;
}

+ (id)showWithTaskId:(id)arg1 openParams:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPinBottomCollectionViewFlowLayout *onlineUsersCollectionLayout; // @synthesize onlineUsersCollectionLayout=_onlineUsersCollectionLayout;
@property(nonatomic) unsigned long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(nonatomic) unsigned int boardMemberCount; // @synthesize boardMemberCount=_boardMemberCount;
@property(retain, nonatomic) RichTextView *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UICollectionView *onlineUsersCollectionView; // @synthesize onlineUsersCollectionView=_onlineUsersCollectionView;
@property(retain, nonatomic) UIView *tabIndicatorView; // @synthesize tabIndicatorView=_tabIndicatorView;
@property(retain, nonatomic) NSMutableArray *tabLabels; // @synthesize tabLabels=_tabLabels;
@property(retain, nonatomic) NSMutableArray *tabPositions; // @synthesize tabPositions=_tabPositions;
@property(retain, nonatomic) UIScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(retain, nonatomic) MMUIActivityIndicatorView *onlineContentLoadingView; // @synthesize onlineContentLoadingView=_onlineContentLoadingView;
@property(retain, nonatomic) MMUIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned long long titleHeatValue; // @synthesize titleHeatValue=_titleHeatValue;
@property(retain, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(nonatomic) __weak id <MMLiveOnlineStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveCommonOnlineMemberSheetOpenParams *openParams; // @synthesize openParams=_openParams;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)liveTask;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isPkRank;
- (_Bool)showRewardAmount;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)createSectionHeader:(struct CGSize)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)updateOnlineUsersRankWith:(id)arg1 onlineUserStateItems:(id)arg2;
- (id)createNoUserLabel;
- (struct CGSize)getNoUserLabelSize;
- (void)rankOnlineStateItems:(id)arg1;
- (void)fetchData;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupViewsContents;
- (void)onTapTab:(id)arg1;
- (id)normalColor;
- (id)selectedColor;
- (void)initTabPageView;
- (void)setupSubviews;
- (void)setupPageSheetConfig;
- (void)setupData;
- (id)initWithTaskId:(id)arg1 openParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

