//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMLiveVoteViewModel, MMTimer, MMUIActivityIndicatorView, MMUIButton, MMUILabel, MMUIView, NSMutableArray, NSString, RichTextView, UICollectionView, UIView;
@protocol MMLiveVotePopupViewDelegate;

@interface MMLiveVotePopupView
{
    _Bool _notUpdate;
    _Bool _showProgress;
    unsigned int _remainTime;
    unsigned int _status;
    id <MMLiveVotePopupViewDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMUIView *_contentView;
    MMUILabel *_finishedLabel;
    RichTextView *_headerView;
    MMUIButton *_voteTypeTips;
    MMUILabel *_deadlineLabel;
    MMUILabel *_headcountLabel;
    UICollectionView *_choiceCollectionView;
    UIView *_choiceCollectionContainerView;
    MMLiveVoteViewModel *_viewModel;
    MMUIButton *_exitButton;
    MMTimer *_countdownTimer;
    NSMutableArray *_displayChoiceList;
    unsigned long long _totalCount;
    unsigned long long _participateCount;
    MMUIActivityIndicatorView *_loadingIndicator;
    MMUILabel *_loadingLabel;
    NSString *_votingId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *votingId; // @synthesize votingId=_votingId;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(nonatomic) unsigned long long participateCount; // @synthesize participateCount=_participateCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSMutableArray *displayChoiceList; // @synthesize displayChoiceList=_displayChoiceList;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) _Bool notUpdate; // @synthesize notUpdate=_notUpdate;
@property(retain, nonatomic) MMUIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(nonatomic) __weak MMLiveVoteViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *choiceCollectionContainerView; // @synthesize choiceCollectionContainerView=_choiceCollectionContainerView;
@property(retain, nonatomic) UICollectionView *choiceCollectionView; // @synthesize choiceCollectionView=_choiceCollectionView;
@property(retain, nonatomic) MMUILabel *headcountLabel; // @synthesize headcountLabel=_headcountLabel;
@property(retain, nonatomic) MMUILabel *deadlineLabel; // @synthesize deadlineLabel=_deadlineLabel;
@property(retain, nonatomic) MMUIButton *voteTypeTips; // @synthesize voteTypeTips=_voteTypeTips;
@property(retain, nonatomic) RichTextView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMUILabel *finishedLabel; // @synthesize finishedLabel=_finishedLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveVotePopupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)popupViewId;
- (id)currentLiveTask;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onHeadCountLabelTap:(id)arg1;
- (void)onPopupTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)needLayoutTypeTipsNewline;
- (void)fillHeadCountLabel;
- (id)genParticipantString;
- (void)addMaskLayerForCollectionContainer;
- (id)getRemainTimeTextWith:(unsigned int)arg1;
- (id)liveTask;
- (double)getHeaderLineHeight;
- (_Bool)isLandscape;
- (_Bool)collectionViewHasMask;
- (double)collectionViewheight;
- (void)createOrUpdateContentLayout;
- (void)layoutSubviews;
- (void)updateCollectionViewAnimateWithInfo:(id)arg1;
- (_Bool)enableChangeWithAnimate:(id)arg1;
- (void)countdownTimerCallBack;
- (void)startCountdown;
- (void)updateCollectionViewAndListWith:(id)arg1 animate:(_Bool)arg2;
- (void)updateViewsHiddenStatus;
- (void)updateLabelsContentWith:(id)arg1;
- (void)updateDisplayPropertiesWith:(id)arg1;
- (void)updateWithInfo:(id)arg1 animate:(_Bool)arg2;
- (void)onVotingInfoUpdate:(id)arg1 fromMsg:(_Bool)arg2;
- (_Bool)shouldShowProgressWithInfo:(id)arg1;
- (void)updateShowProgressWithInfo:(id)arg1;
- (void)_interalClose;
- (void)_addAnimationForContent;
- (void)_internalShowIn:(id)arg1;
- (void)updateLayoutIfNeeded;
- (void)close;
- (void)showIn:(id)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

