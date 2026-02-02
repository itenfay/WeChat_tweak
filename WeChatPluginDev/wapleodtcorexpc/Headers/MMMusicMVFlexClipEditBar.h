//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicFlexEditBarCell, MMMusicFlexEditBarSortHelper, MMUIButton, NSArray, NSMutableArray, NSString, UIPinchGestureRecognizer, UIScrollView;
@protocol MMMusicMVFlexClipEditBarDataSource, MMMusicMVFlexClipEditBarDelegate;

@interface MMMusicMVFlexClipEditBar : UIView
{
    UIScrollView *_timeScrollView;
    UIScrollView *_thumbScrollView;
    UIView *_centerVerticalLine;
    NSMutableArray *_arrItemView;
    MMMusicFlexEditBarCell *_placeHolderItemView;
    MMUIButton *_dragLeftBtn;
    MMUIButton *_dragRightBtn;
    UIView *_dragTopLine;
    UIView *_dragBottomLine;
    MMUIButton *_cancelButton;
    MMUIButton *_doneButton;
    unsigned int _musicDurationMs;
    unsigned long long _selectedCellIndex;
    _Bool _bDragging;
    _Bool _bDragLeftOrRight;
    double _dragInitialX;
    double _dragCurX;
    double _dragInitialCellOffset;
    double _dragInitialCellWidth;
    double _dragCellOffsetForReset;
    _Bool _bScrolling;
    MMMusicFlexEditBarSortHelper *_sortHelper;
    _Bool _isInPinchMode;
    _Bool _hasPlaceholderItem;
    unsigned long long _currentTimeInterval;
    NSArray *_availableTimeItemIntervals;
    id <MMMusicMVFlexClipEditBarDataSource> _dataSource;
    id <MMMusicMVFlexClipEditBarDelegate> _delegate;
    NSMutableArray *_timeCellArr;
    UIView *_progressLine;
    double _pinchModeCurTimeSec;
    UIPinchGestureRecognizer *_pinchGR;
    double _curScale;
    NSMutableArray *_transitionCellArr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPlaceholderItem; // @synthesize hasPlaceholderItem=_hasPlaceholderItem;
@property(retain, nonatomic) NSMutableArray *transitionCellArr; // @synthesize transitionCellArr=_transitionCellArr;
@property(nonatomic) double curScale; // @synthesize curScale=_curScale;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGR; // @synthesize pinchGR=_pinchGR;
@property(nonatomic) double pinchModeCurTimeSec; // @synthesize pinchModeCurTimeSec=_pinchModeCurTimeSec;
@property(nonatomic) _Bool isInPinchMode; // @synthesize isInPinchMode=_isInPinchMode;
@property(retain, nonatomic) UIView *progressLine; // @synthesize progressLine=_progressLine;
@property(retain, nonatomic) NSMutableArray *timeCellArr; // @synthesize timeCellArr=_timeCellArr;
@property(nonatomic) __weak id <MMMusicMVFlexClipEditBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicMVFlexClipEditBarDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *availableTimeItemIntervals; // @synthesize availableTimeItemIntervals=_availableTimeItemIntervals;
@property(nonatomic) unsigned long long currentTimeInterval; // @synthesize currentTimeInterval=_currentTimeInterval;
- (void)onClickDoneBtn;
- (void)cancelCurrentSelected;
- (void)onClickCancelBtn;
- (void)editBarDidPinch:(id)arg1;
- (void)onDragGes:(id)arg1;
- (_Bool)editBarSortHelper:(id)arg1 shouldHanldeGestureEndWithLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)editBarSortHelper:(id)arg1 didChangeLongPressLocation:(struct CGPoint)arg2 cellIndex:(long long)arg3;
- (void)onDidExitSortModeFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)updateViewStatausWithIsDragging:(_Bool)arg1;
- (void)onWillEnterSortModeWithLocationInSelf:(struct CGPoint)arg1 locationInSuper:(struct CGPoint)arg2 locateView:(id)arg3;
- (_Bool)canEnterSortModeWithLocationInSelf:(struct CGPoint)arg1 locateView:(id)arg2;
- (_Bool)canSortSubView:(id)arg1;
- (void)mvFlexEditBarTransitionCell:(id)arg1 didTapWithPreIndex:(unsigned long long)arg2 nextIndex:(unsigned long long)arg3;
- (double)mvFlexEditBarCellWidthPerSecond:(id)arg1;
- (_Bool)mvFlexEditBarCell:(id)arg1 isInSortMode:(unsigned long long)arg2;
- (_Bool)mvFlexEditBarCell:(id)arg1 isGhostCell:(unsigned long long)arg2;
- (double)cellWidthForIndex:(unsigned long long)arg1;
- (double)cellOffsetForIndex:(unsigned long long)arg1;
- (void)cellThumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(CDUnknownBlockType)arg3;
- (void)onTapCell:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)hasGhostMaterials;
- (_Bool)isGhostMaterialWithIndex:(unsigned long long)arg1;
- (_Bool)updateTransitionCellArr;
- (void)setTransitionCellArrHidden:(_Bool)arg1;
- (_Bool)isModifyTransitionWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2;
- (_Bool)isTransitionCellArrValid;
- (_Bool)supportTransitionSelection;
- (void)updateScale:(double)arg1;
- (double)widthPerSecond;
- (double)widthPerSecondFromDataSource;
- (_Bool)shouldShowSelectedCellProgressLine;
- (void)updateProgressLineWithMusicTime:(double)arg1;
- (void)reloadCell:(unsigned long long)arg1;
- (double)curTimeSec;
- (double)curOffsetX;
- (void)seekByOffsetX:(double)arg1;
- (void)seekToOffsetX:(double)arg1;
- (void)seekToIndexStart:(unsigned long long)arg1;
- (void)seekToTimeSec:(double)arg1;
- (_Bool)isEditBarInPinchMode;
- (_Bool)bSortMode;
- (_Bool)isCellSelected;
- (_Bool)isScrolling;
- (_Bool)isDragingSide;
- (struct CGSize)timeListViewCellSize;
- (double)minDragWidth;
- (double)getContentInsetRight;
- (void)layoutScrollViewAndSubViews;
- (void)updateTimeScrollView;
- (void)regenerateTimeScrollViewItemIfNeeded;
- (void)reloadTimeScrollView;
- (unsigned long long)timeIntervalWithScale:(double)arg1 currentTimeInterval:(unsigned long long)arg2;
- (_Bool)shouldAllowScale:(double)arg1;
- (double)musicDurationInSeconds;
- (void)updateDragSideViewFrame;
- (void)updateDragSideStatusWithCellIndex:(unsigned long long)arg1 bSeekToCellStart:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initProgressLine;
- (void)initCenterVerticalLine;
- (void)reloadData;
- (void)initTimeView;
- (void)initDragView;
- (double)currentMaxWidth;
- (void)reloadItemView;
- (void)updatePlaceHolderItemView;
- (void)initScrollView;
- (void)reloadTransitionCellView;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3 musicDurationMs:(unsigned int)arg4 initialTimeItemInterval:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

