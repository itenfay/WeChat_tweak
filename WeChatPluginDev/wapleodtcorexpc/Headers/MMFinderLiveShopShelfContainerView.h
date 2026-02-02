//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIPanGestureRecognizer;
@protocol MMFinderLiveShopShelfContainerDelegate;

@interface MMFinderLiveShopShelfContainerView : UIView
{
    _Bool _isOpening;
    _Bool _moveContentOnPanTableView;
    id <MMFinderLiveShopShelfContainerDelegate> _delegate;
    UIView *_contentView;
    UIView *_backgroundView;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(nonatomic) _Bool moveContentOnPanTableView; // @synthesize moveContentOnPanTableView=_moveContentOnPanTableView;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveShopShelfContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cropCornersFor:(id)arg1;
- (void)handleTableViewPanOnEnd;
- (void)handleTableView:(id)arg1 panOnMoveTo:(double)arg2;
- (void)handleTableView:(id)arg1 panGesture:(id)arg2;
- (void)handleContentViewPanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closeWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onBackgroundTapped;
- (_Bool)isLandScape;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

