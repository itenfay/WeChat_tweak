//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIImageView, UILabel, UIPanGestureRecognizer;
@protocol MMTableViewIndexViewDelegate;

@interface MMTableViewIndexView
{
    MMTableView *_mmtableView;
    id <MMTableViewIndexViewDelegate> _delegate;
    NSArray *_indexTitles;
    NSMutableArray *_indexItems;
    _Bool _isTouching;
    struct CGRect _savedTableViewFrame;
    struct UIEdgeInsets _savedTableViewInsets;
    UIImageView *_indexShape;
    UILabel *_indexShapeLabel;
    UIImageView *_indexShapeImage;
    long long _currentIndex;
    long long _currentSection;
    UIColor *_brandColor;
    UIPanGestureRecognizer *_panGesture;
    int _operationCount;
    int _extendHitWidth;
    NSMutableDictionary *_gestureCancelTouchStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *gestureCancelTouchStatus; // @synthesize gestureCancelTouchStatus=_gestureCancelTouchStatus;
@property(nonatomic) int extendHitWidth; // @synthesize extendHitWidth=_extendHitWidth;
@property(nonatomic) int operationCount; // @synthesize operationCount=_operationCount;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)recoverGestureCancelTouches;
- (void)recordAndTurnOffGestureCancelTouches;
- (void)resetGesture;
- (void)clearSectionHeaderSelection;
- (void)hideContactIndexShape;
- (void)refreshIndexShapeWithItem:(id)arg1;
- (id)getFirstNormalIndexItemWithIndex:(long long)arg1;
- (void)showContactIndexShape:(long long)arg1;
- (void)handleTouchToIndex:(long long)arg1;
- (void)endTouches;
- (void)handleTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)scrollToSectionIndex:(long long)arg1;
- (void)totallyReloadView;
- (void)reloadIndexView;
- (struct UIEdgeInsets)getTableViewContentInset;
- (void)reloadView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initBrandColor;
- (id)initWithTableView:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

