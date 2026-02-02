//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, NSString, UIButton;

@interface MMFinderLiveNewAnchorTaskRewardView
{
    _Bool _shouldShowBtn;
    CDUnknownBlockType _jumpRewardHomeBlock;
    NSString *_reward;
    MMUILabel *_completeTitleLabel;
    MMUILabel *_completeRewardLabel;
    UIButton *_completeDetailButton;
    MMUIView *_leftShapes;
    MMUIView *_rightShapes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *rightShapes; // @synthesize rightShapes=_rightShapes;
@property(retain, nonatomic) MMUIView *leftShapes; // @synthesize leftShapes=_leftShapes;
@property(retain, nonatomic) UIButton *completeDetailButton; // @synthesize completeDetailButton=_completeDetailButton;
@property(retain, nonatomic) MMUILabel *completeRewardLabel; // @synthesize completeRewardLabel=_completeRewardLabel;
@property(retain, nonatomic) MMUILabel *completeTitleLabel; // @synthesize completeTitleLabel=_completeTitleLabel;
@property(nonatomic) _Bool shouldShowBtn; // @synthesize shouldShowBtn=_shouldShowBtn;
@property(retain, nonatomic) NSString *reward; // @synthesize reward=_reward;
@property(copy, nonatomic) CDUnknownBlockType jumpRewardHomeBlock; // @synthesize jumpRewardHomeBlock=_jumpRewardHomeBlock;
- (void)onCompleteButtonClicked;
- (void)layoutShapes;
- (void)layoutCompleteUI;
- (void)layoutUI;
- (void)setupShapes;
- (void)setupCompleteUI;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

