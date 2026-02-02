//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGroupedCellsView, MMTimer, MMUIButton, MMUILabel, NSArray, NSIndexPath, NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UITableView, UITableViewCell, UIView;
@protocol MMTableViewMultipleReorderDataSource, MMTableViewMultipleReorderDelegate;

@interface MMTableViewMultipleReorder : NSObject
{
    _Bool _showCancelButton;
    _Bool _enableAutoScroll;
    _Bool _isMultipleReordering;
    _Bool _hasSpaceCell;
    _Bool _previousShowsVerticalScrollIndicator;
    _Bool _isAutoScrolling;
    double _groupedCellsScaleFactor;
    NSString *_groupedCellsAccessibilityLabel;
    double _minimumPressDuration;
    double _spaceCellHeight;
    double _gradientBackgroundHeight;
    NSString *_tipsText;
    NSString *_spaceCellTipsText;
    double _autoScrollStartTopInset;
    UITableView *_tableView;
    id <MMTableViewMultipleReorderDelegate> _delegate;
    id <MMTableViewMultipleReorderDataSource> _dataSource;
    NSArray *_indexPathsToMove;
    NSArray *_rowsOfSectionsToMove;
    NSArray *_dicOriginalRowToFilteredRowOfSections;
    NSArray *_dicFilteredRowToOriginalRowOfSections;
    MMGroupedCellsView *_groupedCellsView;
    UIView *_cancelMoveIndicatorView;
    UIView *_gradientBackgroundView;
    MMUILabel *_tipsLabel;
    MMUIButton *_cancelButton;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_spaceCellIndexPath;
    UITableViewCell *_spaceCell;
    long long _numberOfMovesToDo;
    double _previousEstimatedRowHeight;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    double _scrollStep;
    MMTimer *_autoScrollTimer;
    struct CGPoint _currentPosition;
    struct UIEdgeInsets _previousContentInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(nonatomic) double scrollStep; // @synthesize scrollStep=_scrollStep;
@property(nonatomic) _Bool isAutoScrolling; // @synthesize isAutoScrolling=_isAutoScrolling;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(nonatomic) _Bool previousShowsVerticalScrollIndicator; // @synthesize previousShowsVerticalScrollIndicator=_previousShowsVerticalScrollIndicator;
@property(nonatomic) double previousEstimatedRowHeight; // @synthesize previousEstimatedRowHeight=_previousEstimatedRowHeight;
@property(nonatomic) struct UIEdgeInsets previousContentInset; // @synthesize previousContentInset=_previousContentInset;
@property(nonatomic) long long numberOfMovesToDo; // @synthesize numberOfMovesToDo=_numberOfMovesToDo;
@property(retain, nonatomic) UITableViewCell *spaceCell; // @synthesize spaceCell=_spaceCell;
@property(nonatomic) _Bool hasSpaceCell; // @synthesize hasSpaceCell=_hasSpaceCell;
@property(retain, nonatomic) NSIndexPath *spaceCellIndexPath; // @synthesize spaceCellIndexPath=_spaceCellIndexPath;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) UIView *cancelMoveIndicatorView; // @synthesize cancelMoveIndicatorView=_cancelMoveIndicatorView;
@property(retain, nonatomic) MMGroupedCellsView *groupedCellsView; // @synthesize groupedCellsView=_groupedCellsView;
@property(retain, nonatomic) NSArray *dicFilteredRowToOriginalRowOfSections; // @synthesize dicFilteredRowToOriginalRowOfSections=_dicFilteredRowToOriginalRowOfSections;
@property(retain, nonatomic) NSArray *dicOriginalRowToFilteredRowOfSections; // @synthesize dicOriginalRowToFilteredRowOfSections=_dicOriginalRowToFilteredRowOfSections;
@property(retain, nonatomic) NSArray *rowsOfSectionsToMove; // @synthesize rowsOfSectionsToMove=_rowsOfSectionsToMove;
@property(retain, nonatomic) NSArray *indexPathsToMove; // @synthesize indexPathsToMove=_indexPathsToMove;
@property(nonatomic) _Bool isMultipleReordering; // @synthesize isMultipleReordering=_isMultipleReordering;
@property(nonatomic) __weak id <MMTableViewMultipleReorderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MMTableViewMultipleReorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double autoScrollStartTopInset; // @synthesize autoScrollStartTopInset=_autoScrollStartTopInset;
@property(nonatomic) _Bool enableAutoScroll; // @synthesize enableAutoScroll=_enableAutoScroll;
@property(retain, nonatomic) NSString *spaceCellTipsText; // @synthesize spaceCellTipsText=_spaceCellTipsText;
@property(retain, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(nonatomic) double gradientBackgroundHeight; // @synthesize gradientBackgroundHeight=_gradientBackgroundHeight;
@property(nonatomic) double spaceCellHeight; // @synthesize spaceCellHeight=_spaceCellHeight;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(retain, nonatomic) NSString *groupedCellsAccessibilityLabel; // @synthesize groupedCellsAccessibilityLabel=_groupedCellsAccessibilityLabel;
@property(nonatomic) double groupedCellsScaleFactor; // @synthesize groupedCellsScaleFactor=_groupedCellsScaleFactor;
@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (_Bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setSpaceCellLabelHidden:(_Bool)arg1;
- (void)makeSpaceCell:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fireTableViewScroll;
- (void)stopAutoScroll;
- (void)startAutoScroll;
- (void)handleAutoScrollAtPosition:(struct CGPoint)arg1;
- (double)getFixedSpaceCellHeight;
- (_Bool)shouldCancelMoveAtPosition:(struct CGPoint)arg1;
- (void)removeRowOfSpaceCell;
- (void)onReorderEndPosition:(struct CGPoint)arg1;
- (void)moveCellIfNeeded:(struct CGPoint)arg1;
- (void)onReorderChangePosition:(struct CGPoint)arg1;
- (void)onReorderBeginPosition:(struct CGPoint)arg1;
- (void)onLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onCancel;
- (void)cancelMultipleReorder;
- (void)prepareMultipleReorderData;
- (_Bool)isSpaceCell:(id)arg1;
- (long long)filteredNumberOfRowsInSection:(long long)arg1;
- (id)indexPathForFilteredIndexPath:(id)arg1;
- (id)filteredIndexPathForIndexPath:(id)arg1;
- (void)endMultipleReorder;
- (void)startMultipleReorderWithIndexPaths:(id)arg1;
- (void)initView;
- (id)initWithTableView:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

