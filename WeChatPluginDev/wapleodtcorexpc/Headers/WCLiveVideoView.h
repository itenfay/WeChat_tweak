//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MoveWithTouchAlgorithm, NSString, UIView;
@protocol WCLiveVideoViewDelegate;

@interface WCLiveVideoView : UIImageView
{
    id <WCLiveVideoViewDelegate> _delegate;
    UIView *_frontView;
    MoveWithTouchAlgorithm *_moveAlgorithm;
    struct CGPoint _currentOrigin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(nonatomic) __weak UIView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) struct CGPoint currentOrigin; // @synthesize currentOrigin=_currentOrigin;
@property(nonatomic) __weak id <WCLiveVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldForcePortrait;
- (_Bool)shouldLockToPortrait;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)createMoveAlgorithm;
- (void)addSubview:(id)arg1;
- (void)addFrontView:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)adsorbToWindow;
- (void)unSupportDrag;
- (void)supportDrag;
- (void)supportDragIn:(struct CGRect)arg1 allowAdsorbToWindow:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

