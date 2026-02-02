//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MinimizeAnimateStateBaseView, MinimizeTaskData, NSString, UIButton, UILabel;
@protocol MinimizeTaskStateViewDelegate;

@interface MinimizeTaskStateView : UIView
{
    unsigned int _taskState;
    id <MinimizeTaskStateViewDelegate> _m_delegate;
    MinimizeTaskData *_taskData;
    UILabel *_titleLabel;
    unsigned long long _positionType;
    UIButton *_closeBtn;
    UIView *_entryBtn;
    MinimizeAnimateStateBaseView *_stateView;
    UIView *_touchArea;
    struct UIEdgeInsets _edgeInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *touchArea; // @synthesize touchArea=_touchArea;
@property(retain, nonatomic) MinimizeAnimateStateBaseView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) UIView *entryBtn; // @synthesize entryBtn=_entryBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) unsigned long long positionType; // @synthesize positionType=_positionType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic) unsigned int taskState; // @synthesize taskState=_taskState;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) __weak id <MinimizeTaskStateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)longPressed;
- (void)setHighlightForLongPress:(_Bool)arg1 scale:(double)arg2;
- (_Bool)shouldHighlightForLongPressWithPoint:(struct CGPoint)arg1;
- (_Bool)isSupportLongPress;
- (void)onEntryBtnClicked:(id)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)setCloseBtnVisible:(_Bool)arg1;
- (double)taskIconLeftMargin;
- (double)closeBtnRightMargin;
- (void)updateTitle:(id)arg1;
- (void)showSubviewsWhenMaximizeEnd;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)resetAllView;
- (void)addEntryButton;
- (void)addTitleLabel;
- (void)addTouchArea;
- (void)addCloseButton;
- (id)getDefaultClipPath:(struct CGRect)arg1 positionType:(unsigned long long)arg2;
- (void)updateMask:(_Bool)arg1 Duration:(double)arg2;
- (void)updatePositionType:(unsigned long long)arg1;
- (unsigned long long)getPositionType:(struct CGRect)arg1;
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

