//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIScreenEdgePanGestureRecognizer, UIView, WCSearcher;
@protocol MMSearchPanGestureControlDelegate;

@interface MMSearchPanGestureController : NSObject
{
    WCSearcher *_searcher;
    UIView *_gestureView;
    double _touchBeginPosX;
    double _dragBeginPosX;
    UIView *_backCoverView;
    UIView *_edgeShadowView;
    UIView *_bottomView;
    double _searchBarPlaceLabelOriginLeftX;
    double _searchBarTextFieldOriginWidth;
    double _searchBarTextFieldExtentableMaxWidth;
    _Bool _isGesturing;
    UIScreenEdgePanGestureRecognizer *_panGesture;
    id <MMSearchPanGestureControlDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMSearchPanGestureControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isGesturing; // @synthesize isGesturing=_isGesturing;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void)resetView:(_Bool)arg1;
- (void)validateDrag;
- (void)updateDragingFrame:(double)arg1 keepBarUI:(_Bool)arg2;
- (void)updateDragingFrame:(double)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)getBottomView;
- (double)getSearchBarBottomY;
- (void)removeCoverView;
- (void)setInteractionEnabled:(_Bool)arg1;
- (void)connectCoverView;
- (id)getSearchBarClearButton;
- (id)getSearchBarPlaceLabel;
- (id)getSearchContainerView;
- (void)bindGesture;
- (void)dealloc;
- (id)initWithWCSearcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

