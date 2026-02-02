//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogGuideInfo, MMUILabel, NSString, UIButton, UIImageView, UIScrollView, UIView;
@protocol FaceRecogGuideViewDelegate;

@interface FaceRecogReadNumGuideView
{
    UIScrollView *_pageScrollView;
    MMUILabel *_guideTitleLabel;
    UIImageView *_firstStepNumberIconView;
    MMUILabel *_firstStepContentLabel;
    UIImageView *_firstStepIconView;
    UIImageView *_secondStepNumberIconView;
    MMUILabel *_secondStepContentLabel;
    UIImageView *_secondStepIconView;
    UIButton *_finishBtn;
    UIView *_connectLineView;
    FaceRecogGuideInfo *_guideInfo;
    id <FaceRecogGuideViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FaceRecogGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FaceRecogGuideInfo *guideInfo; // @synthesize guideInfo=_guideInfo;
@property(retain, nonatomic) UIView *connectLineView; // @synthesize connectLineView=_connectLineView;
@property(retain, nonatomic) UIButton *finishBtn; // @synthesize finishBtn=_finishBtn;
@property(retain, nonatomic) UIImageView *secondStepIconView; // @synthesize secondStepIconView=_secondStepIconView;
@property(retain, nonatomic) MMUILabel *secondStepContentLabel; // @synthesize secondStepContentLabel=_secondStepContentLabel;
@property(retain, nonatomic) UIImageView *secondStepNumberIconView; // @synthesize secondStepNumberIconView=_secondStepNumberIconView;
@property(retain, nonatomic) UIImageView *firstStepIconView; // @synthesize firstStepIconView=_firstStepIconView;
@property(retain, nonatomic) MMUILabel *firstStepContentLabel; // @synthesize firstStepContentLabel=_firstStepContentLabel;
@property(retain, nonatomic) UIImageView *firstStepNumberIconView; // @synthesize firstStepNumberIconView=_firstStepNumberIconView;
@property(retain, nonatomic) MMUILabel *guideTitleLabel; // @synthesize guideTitleLabel=_guideTitleLabel;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
- (void)initData;
- (void)initLineView;
- (void)initFirstPage;
- (void)initScrollView;
- (void)initView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

