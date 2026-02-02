//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIView, NSMutableArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, WCStoryDismissInteractiveTransition, WCStoryFriendsCollectionDismissTransition, WCStoryReportUtil, WCStoryTimelineDataUnit, WCStoryTimelineDataVM;
@protocol WCStoryFriendsCollectionViewControllerDelegate;

@interface WCStoryFriendsCollectionViewController
{
    _Bool _isCleanUnreadStory;
    id <WCStoryFriendsCollectionViewControllerDelegate> _delegate;
    WCStoryReportUtil *_storyReportUtil;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCStoryTimelineDataVM *_storyTimelineDataVM;
    WCStoryTimelineDataUnit *_storyTimelineDataUnit;
    NSMutableArray *_timestampUnreadCellModelArray;
    NSMutableArray *_timestampReadCellModelArray;
    NSMutableArray *_unreadCornerMessageCellModelArray;
    MMUIButton *_closeButton;
    MMUIView *_topView;
    MMUIView *_contentView;
    MMUIButton *_backgroundButton;
    UIPanGestureRecognizer *_panGesture;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    WCStoryFriendsCollectionDismissTransition *_dismissAnimateTransition;
    WCStoryDismissInteractiveTransition *_dimissInteractiveTransition;
    UILabel *_emptyTipsLabel;
    UIButton *_cleanButton;
    unsigned long long _clickClearCount;
    unsigned long long _clickRenewCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long clickRenewCount; // @synthesize clickRenewCount=_clickRenewCount;
@property(nonatomic) unsigned long long clickClearCount; // @synthesize clickClearCount=_clickClearCount;
@property(nonatomic) _Bool isCleanUnreadStory; // @synthesize isCleanUnreadStory=_isCleanUnreadStory;
@property(nonatomic) __weak UIButton *cleanButton; // @synthesize cleanButton=_cleanButton;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *dimissInteractiveTransition; // @synthesize dimissInteractiveTransition=_dimissInteractiveTransition;
@property(retain, nonatomic) WCStoryFriendsCollectionDismissTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSMutableArray *unreadCornerMessageCellModelArray; // @synthesize unreadCornerMessageCellModelArray=_unreadCornerMessageCellModelArray;
@property(retain, nonatomic) NSMutableArray *timestampReadCellModelArray; // @synthesize timestampReadCellModelArray=_timestampReadCellModelArray;
@property(retain, nonatomic) NSMutableArray *timestampUnreadCellModelArray; // @synthesize timestampUnreadCellModelArray=_timestampUnreadCellModelArray;
@property(retain, nonatomic) WCStoryTimelineDataUnit *storyTimelineDataUnit; // @synthesize storyTimelineDataUnit=_storyTimelineDataUnit;
@property(retain, nonatomic) WCStoryTimelineDataVM *storyTimelineDataVM; // @synthesize storyTimelineDataVM=_storyTimelineDataVM;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCStoryReportUtil *storyReportUtil; // @synthesize storyReportUtil=_storyReportUtil;
@property(nonatomic) __weak id <WCStoryFriendsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyTimelineDataItemsHasUpdate;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (void)addPopBackInteractivePopGesture;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didSelectUnreadCornerMessageActionWithIndex:(unsigned long long)arg1;
- (_Bool)shouldTimelineUnReadSection:(unsigned long long)arg1;
- (_Bool)shouldShowMessageSection:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reportCleanExposeData;
- (void)cleanUnreadStory;
- (void)onClickClean;
- (void)onClickClose;
- (struct CGSize)cellSize;
- (void)setupCollectionViewWithGradientEffect;
- (void)setupUI;
- (void)setupData;
- (void)handleCollectionViewPanGesture:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (id)createCleanButton;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (id)userNameStrFromDataUnits:(id)arg1;
- (void)reportExposeData;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

