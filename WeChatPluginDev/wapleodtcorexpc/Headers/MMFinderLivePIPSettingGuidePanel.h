//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUILabel, UIButton, UIView;

@interface MMFinderLivePIPSettingGuidePanel
{
    CDUnknownBlockType _jumpCallback;
    MMFinderLiveTaskId *_taskId;
    UIView *_panelView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIButton *_confirmButton;
    UIButton *_jumpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType jumpCallback; // @synthesize jumpCallback=_jumpCallback;
- (id)audienceLogReporter;
- (void)pageSheetDidAppear;
- (void)confirmButtonAction;
- (void)layoutConfirmButton;
- (void)jumpButtonAction;
- (void)layoutJumpButton;
- (void)setDescContent;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

@end

