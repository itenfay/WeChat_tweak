//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMUIButton, MinimizeTaskData, NSArray, NSString, UIButton, UIColor, UILabel;
@protocol MinimizeDraggableTaskViewDelegate;

@interface MinimizeDraggableTaskView : UIView
{
    id <MinimizeDraggableTaskViewDelegate> _m_delegate;
    MinimizeTaskData *_taskData;
    UIButton *_containerView;
    UIView *_taskIcon;
    UIColor *_gradientBackgroundColor;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_titleTailLabel;
    UILabel *_subTitleTailLabel;
    double _titleMaxWidthWithCurrentState;
    unsigned long long _positionType;
    UIView *_shadowLayerView;
    UIView *_shadowSubLayerView;
    UIButton *_closeBtn;
    MMUIButton *_controlBtn;
    UIView *_whiteBackgroundView;
    NSArray *_passiveStateIconList;
    CAShapeLayer *_outterBorderLayer;
    CAShapeLayer *_innerBorderLayer;
    struct UIEdgeInsets _edgeInset;
    struct CGRect _frameBeforeMove;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *innerBorderLayer; // @synthesize innerBorderLayer=_innerBorderLayer;
@property(retain, nonatomic) CAShapeLayer *outterBorderLayer; // @synthesize outterBorderLayer=_outterBorderLayer;
@property(retain, nonatomic) NSArray *passiveStateIconList; // @synthesize passiveStateIconList=_passiveStateIconList;
@property(retain, nonatomic) UIView *whiteBackgroundView; // @synthesize whiteBackgroundView=_whiteBackgroundView;
@property(retain, nonatomic) MMUIButton *controlBtn; // @synthesize controlBtn=_controlBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *shadowSubLayerView; // @synthesize shadowSubLayerView=_shadowSubLayerView;
@property(retain, nonatomic) UIView *shadowLayerView; // @synthesize shadowLayerView=_shadowLayerView;
@property(nonatomic) unsigned long long positionType; // @synthesize positionType=_positionType;
@property(nonatomic) double titleMaxWidthWithCurrentState; // @synthesize titleMaxWidthWithCurrentState=_titleMaxWidthWithCurrentState;
@property(retain, nonatomic) UILabel *subTitleTailLabel; // @synthesize subTitleTailLabel=_subTitleTailLabel;
@property(retain, nonatomic) UILabel *titleTailLabel; // @synthesize titleTailLabel=_titleTailLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGRect frameBeforeMove; // @synthesize frameBeforeMove=_frameBeforeMove;
@property(nonatomic) struct UIEdgeInsets edgeInset; // @synthesize edgeInset=_edgeInset;
@property(retain, nonatomic) UIColor *gradientBackgroundColor; // @synthesize gradientBackgroundColor=_gradientBackgroundColor;
@property(retain, nonatomic) UIView *taskIcon; // @synthesize taskIcon=_taskIcon;
@property(retain, nonatomic) UIButton *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) __weak id <MinimizeDraggableTaskViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)longPressed;
- (void)setHighlightForLongPress:(_Bool)arg1 scale:(double)arg2;
- (_Bool)shouldHighlightForLongPressWithPoint:(struct CGPoint)arg1;
- (_Bool)isSupportLongPress;
- (_Bool)isEqualToTaskKey:(id)arg1;
- (void)setCloseBtnVisible:(_Bool)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(struct CGRect)arg2 PositionType:(unsigned long long)arg3 BorderColor:(id)arg4 BorderWidth:(double)arg5;
- (struct CGRect)calcFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)resetBorderLayerWhenTraitCollectionDidChange;
- (void)resetBorderLayer;
- (void)removeShadowAndAddBorder;
- (void)resetAllView;
- (double)taskIconLeftMargin;
- (double)closeBtnRightMargin;
- (void)updateUI:(id)arg1 Subtitle:(id)arg2 titleTail:(id)arg3 subTitleTail:(id)arg4;
- (void)updateTask:(id)arg1 Subtitle:(id)arg2 titleTail:(id)arg3 subTitleTail:(id)arg4;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)onBtnClicked:(id)arg1;
- (void)updateMask:(_Bool)arg1 View:(id)arg2 Duration:(double)arg3;
- (void)updateMask:(_Bool)arg1 Duration:(double)arg2;
- (void)updateShadow:(_Bool)arg1 Duration:(double)arg2;
- (void)showIcon;
- (void)hideIcon;
- (void)showBackgroundColor;
- (void)hideBackgroundColor;
- (void)showShadow;
- (void)hideShadow;
- (void)showSubviewsWhenMaximizeEnd;
- (void)hideSubviewsWhenMaximizeBegin;
- (id)getDefaultClipPath:(struct CGRect)arg1 positionType:(unsigned long long)arg2;
- (unsigned long long)getPositionType:(struct CGRect)arg1;
- (void)updatePositionType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

