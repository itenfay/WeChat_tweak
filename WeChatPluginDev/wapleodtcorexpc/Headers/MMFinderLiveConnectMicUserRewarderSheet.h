//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIActivityIndicatorView, NSMutableArray, NSString, RichTextView, UICollectionView;
@protocol MMLiveOnlineStateViewDelegate;

@interface MMFinderLiveConnectMicUserRewarderSheet
{
    unsigned int _boardType;
    MMFinderLiveTaskId *_taskId;
    id <MMLiveOnlineStateViewDelegate> _delegate;
    NSMutableArray *_userList;
    NSString *_micId;
    NSString *_boardKey;
    unsigned long long _titleHeatValue;
    MMUIActivityIndicatorView *_onlineContentLoadingView;
    UICollectionView *_onlineUsersCollectionView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    RichTextView *_noUserLabel;
}

+ (id)showWithTaskId:(id)arg1 micId:(id)arg2 boardKey:(id)arg3 boardType:(unsigned int)arg4 titleHeatValue:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UICollectionView *onlineUsersCollectionView; // @synthesize onlineUsersCollectionView=_onlineUsersCollectionView;
@property(retain, nonatomic) MMUIActivityIndicatorView *onlineContentLoadingView; // @synthesize onlineContentLoadingView=_onlineContentLoadingView;
@property(nonatomic) unsigned long long titleHeatValue; // @synthesize titleHeatValue=_titleHeatValue;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(retain, nonatomic) NSString *boardKey; // @synthesize boardKey=_boardKey;
@property(retain, nonatomic) NSString *micId; // @synthesize micId=_micId;
@property(retain, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(nonatomic) __weak id <MMLiveOnlineStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)audienceLogReporter;
- (id)liveTask;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)createSectionHeader:(struct CGSize)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (id)createNoUserLabel;
- (void)rankOnlineStateItems:(id)arg1;
- (void)fetchData;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupViewsContents;
- (void)setupSubviews;
- (void)setupPageSheetConfig;
- (void)setupData;
- (id)initWithTaskId:(id)arg1 micId:(id)arg2 boardKey:(id)arg3 boardType:(unsigned int)arg4 titleHeatValue:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

