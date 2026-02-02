//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSIndexPath, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITableView, UIView;
@protocol MMTableViewReorderDelegate;

@interface MMTableViewReorder : NSObject
{
    _Bool _isLongPressTrigger;
    _Bool _isSingleClickTrigger;
    _Bool _isAutoScrollEnable;
    _Bool _isGettingCellSnapshot;
    _Bool _isAutoScrolling;
    _Bool _isBottomToTop;
    id <MMTableViewReorderDelegate> _delegate;
    double _longPressTrigerDuration;
    double _autoScrollStartTopInset;
    double _autoScrollStartBottomInset;
    UITableView *_tableView;
    UIView *_snapshotCell;
    NSIndexPath *_draggingIndexPath;
    MMTimer *_autoScrollTimer;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPanGestureRecognizer *_singlePanGesture;
    struct CGPoint _currentPosition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *singlePanGesture; // @synthesize singlePanGesture=_singlePanGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) _Bool isBottomToTop; // @synthesize isBottomToTop=_isBottomToTop;
@property(nonatomic) _Bool isAutoScrolling; // @synthesize isAutoScrolling=_isAutoScrolling;
@property(retain, nonatomic) MMTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(retain, nonatomic) NSIndexPath *draggingIndexPath; // @synthesize draggingIndexPath=_draggingIndexPath;
@property(nonatomic) _Bool isGettingCellSnapshot; // @synthesize isGettingCellSnapshot=_isGettingCellSnapshot;
@property(retain, nonatomic) UIView *snapshotCell; // @synthesize snapshotCell=_snapshotCell;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double autoScrollStartBottomInset; // @synthesize autoScrollStartBottomInset=_autoScrollStartBottomInset;
@property(nonatomic) double autoScrollStartTopInset; // @synthesize autoScrollStartTopInset=_autoScrollStartTopInset;
@property(nonatomic) _Bool isAutoScrollEnable; // @synthesize isAutoScrollEnable=_isAutoScrollEnable;
@property(nonatomic) double longPressTrigerDuration; // @synthesize longPressTrigerDuration=_longPressTrigerDuration;
@property(nonatomic) _Bool isSingleClickTrigger; // @synthesize isSingleClickTrigger=_isSingleClickTrigger;
@property(nonatomic) _Bool isLongPressTrigger; // @synthesize isLongPressTrigger=_isLongPressTrigger;
@property(nonatomic) __weak id <MMTableViewReorderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indexAfter:(id)arg1;
- (id)indexBefore:(id)arg1;
- (id)genSnapshotForIndexPath:(id)arg1;
- (void)updateSnapshotCellForIndexPath:(id)arg1;
- (void)fireTableViewScroll;
- (void)stopAutoScroll;
- (void)startAutoScrollToTop:(_Bool)arg1;
- (id)calculateDestinationIndexForPos:(struct CGPoint)arg1;
- (void)checkCellExchangeWithCurrentPos:(struct CGPoint)arg1;
- (void)onReorderEndPosition:(struct CGPoint)arg1;
- (void)onReorderChangePosition:(struct CGPoint)arg1;
- (void)onReorderBeginPosition:(struct CGPoint)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGestureState:(long long)arg1 position:(struct CGPoint)arg2;
- (void)onPanGesture:(id)arg1;
- (void)onLongPressGesture:(id)arg1;
- (_Bool)isSpaceCell:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

