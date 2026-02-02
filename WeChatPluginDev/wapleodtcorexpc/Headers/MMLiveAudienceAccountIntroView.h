//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMFinderLiveTaskId, MMUILabel, NSString, UIButton, UILabel, UIView, UIVisualEffectView;
@protocol MMLiveAudienceAccountIntroViewDelegate;

@interface MMLiveAudienceAccountIntroView
{
    id <MMLiveAudienceAccountIntroViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _viewScene;
    UILabel *_introTitleLabel;
    MMUILabel *_introDetailLabel;
    UIButton *_chooseRoleButton;
    UIButton *_enterLiveButton;
    UIView *_contentView;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *enterLiveButton; // @synthesize enterLiveButton=_enterLiveButton;
@property(retain, nonatomic) UIButton *chooseRoleButton; // @synthesize chooseRoleButton=_chooseRoleButton;
@property(retain, nonatomic) MMUILabel *introDetailLabel; // @synthesize introDetailLabel=_introDetailLabel;
@property(retain, nonatomic) UILabel *introTitleLabel; // @synthesize introTitleLabel=_introTitleLabel;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveAudienceAccountIntroViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onEnterLiveButtonClicked;
- (void)onChooseButtonClicked;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 andScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

