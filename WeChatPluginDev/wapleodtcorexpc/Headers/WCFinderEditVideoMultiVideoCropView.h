//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoAttr, MMUIView, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, WCFinderEditVideoPorgressInfoViewModel;
@protocol WCFinderEditVideoMultiVideoCropViewDelegate;

@interface WCFinderEditVideoMultiVideoCropView
{
    _Bool _isScrollingTriggerByPlayer;
    _Bool _isScrollingTriggerByCropPanEnd;
    _Bool _isPaningForCropTime;
    _Bool _ignoreShock;
    id <WCFinderEditVideoMultiVideoCropViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_collectionViews;
    NSMutableArray *_leftPansView;
    NSMutableArray *_rightPansViews;
    NSMutableArray *_topLineViews;
    NSMutableArray *_bottomLineViews;
    MMUIView *_containerView;
    UILabel *_titleLabel;
    UIButton *_closeBtn;
    UIButton *_doneBtn;
    UIButton *_playBtn;
    UILabel *_cropTipsLabel;
    WCFinderEditVideoPorgressInfoViewModel *_progressViewModel;
    EditVideoAttr *_attr;
    double _minDuration;
    unsigned long long _scrollTriggerTime;
    NSMutableArray *_backUpSingleAttrs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *backUpSingleAttrs; // @synthesize backUpSingleAttrs=_backUpSingleAttrs;
@property(nonatomic) unsigned long long scrollTriggerTime; // @synthesize scrollTriggerTime=_scrollTriggerTime;
@property(nonatomic) _Bool ignoreShock; // @synthesize ignoreShock=_ignoreShock;
@property(nonatomic) _Bool isPaningForCropTime; // @synthesize isPaningForCropTime=_isPaningForCropTime;
@property(nonatomic) _Bool isScrollingTriggerByCropPanEnd; // @synthesize isScrollingTriggerByCropPanEnd=_isScrollingTriggerByCropPanEnd;
@property(nonatomic) _Bool isScrollingTriggerByPlayer; // @synthesize isScrollingTriggerByPlayer=_isScrollingTriggerByPlayer;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(retain, nonatomic) EditVideoAttr *attr; // @synthesize attr=_attr;
@property(nonatomic) __weak WCFinderEditVideoPorgressInfoViewModel *progressViewModel; // @synthesize progressViewModel=_progressViewModel;
@property(retain, nonatomic) UILabel *cropTipsLabel; // @synthesize cropTipsLabel=_cropTipsLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *bottomLineViews; // @synthesize bottomLineViews=_bottomLineViews;
@property(retain, nonatomic) NSMutableArray *topLineViews; // @synthesize topLineViews=_topLineViews;
@property(retain, nonatomic) NSMutableArray *rightPansViews; // @synthesize rightPansViews=_rightPansViews;
@property(retain, nonatomic) NSMutableArray *leftPansView; // @synthesize leftPansView=_leftPansView;
@property(retain, nonatomic) NSMutableArray *collectionViews; // @synthesize collectionViews=_collectionViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WCFinderEditVideoMultiVideoCropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)onClickPlayBtn:(id)arg1;
- (void)onClickDoneBtn:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)updateCollectionViewSelectState;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)playShock;
- (void)changePauseState:(_Bool)arg1;
- (_Bool)isShowing;
- (void)resumeVideo;
- (void)pauseVideo;
- (_Bool)isPaused;
- (void)setCropTitleHidden:(_Bool)arg1;
- (void)setProgress:(double)arg1 withAnimatedDuration:(double)arg2;
- (void)saveOriginEditData;
- (void)updateScrollViewContent;
- (void)updateCropTips;
- (void)setCurserHidden:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)adjustScrollViewContentInset;
- (void)setupSubView;
- (void)reloadCollectionViews;
- (_Bool)setupWithAttr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

