//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MinimizeTaskData, NSString, UIButton;
@protocol MinimizeTaskOuterContentViewDelegate;

@interface MinimizeTaskOuterContentView : UIView
{
    id <MinimizeTaskOuterContentViewDelegate> _m_delegate;
    MinimizeTaskData *_taskData;
    unsigned long long _positionType;
    UIView *_maskView;
    UIView *_shadowLayerView;
    UIView *_shadowSubLayerView;
    UIButton *_highlightView;
    UIView *_outerContentContainerView;
    CAShapeLayer *_outterBorderLayer;
    CAShapeLayer *_innerBorderLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *innerBorderLayer; // @synthesize innerBorderLayer=_innerBorderLayer;
@property(retain, nonatomic) CAShapeLayer *outterBorderLayer; // @synthesize outterBorderLayer=_outterBorderLayer;
@property(retain, nonatomic) UIView *outerContentContainerView; // @synthesize outerContentContainerView=_outerContentContainerView;
@property(retain, nonatomic) UIButton *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *shadowSubLayerView; // @synthesize shadowSubLayerView=_shadowSubLayerView;
@property(retain, nonatomic) UIView *shadowLayerView; // @synthesize shadowLayerView=_shadowLayerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) unsigned long long positionType; // @synthesize positionType=_positionType;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) __weak id <MinimizeTaskOuterContentViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)longPressed;
- (_Bool)isSupportLongPress;
- (void)onBtnClicked:(id)arg1;
- (void)showSubviewsWhenMaximizeEnd;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)setBackgroundViewHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(struct CGRect)arg2 PositionType:(unsigned long long)arg3 BorderColor:(id)arg4 BorderWidth:(double)arg5;
- (struct CGRect)calcFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)resetBorderLayer;
- (id)getDefaultClipPath:(struct CGRect)arg1 positionType:(unsigned long long)arg2;
- (void)updateShadow:(_Bool)arg1 Duration:(double)arg2;
- (void)updateMask:(_Bool)arg1 Duration:(double)arg2;
- (void)updateOuterContentContainerView;
- (void)updatePositionType:(unsigned long long)arg1;
- (unsigned long long)getPositionType:(struct CGRect)arg1;
- (_Bool)isOuterContentViewAttached;
- (void)attachOuterContentView;
- (_Bool)isEqualToTaskKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

