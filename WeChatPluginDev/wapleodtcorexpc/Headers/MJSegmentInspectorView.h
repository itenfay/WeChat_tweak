//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisherButton, MJSegmentInspectorViewModel, MMUIButton, MMUILabel, UIView;

@interface MJSegmentInspectorView
{
    MJSegmentInspectorViewModel *_viewModel;
    UIView *_topBar;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MJPublisherButton *_applyAllButton;
    MJPublisherButton *_resetButton;
    MMUIButton *_cancelButton;
    MMUIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MJPublisherButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) MJPublisherButton *applyAllButton; // @synthesize applyAllButton=_applyAllButton;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) MJSegmentInspectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (void)applyAllButtonDidTouchUpInside:(id)arg1;
- (void)doneButtonDidTouchUpInside:(id)arg1;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)commonInit;
- (id)initWithViewModel:(id)arg1;

@end

