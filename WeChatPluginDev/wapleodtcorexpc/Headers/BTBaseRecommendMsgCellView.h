//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTBaseRecommendMsgCellViewModel, BTRecommendSectionData, MMUIButton, UILongPressGestureRecognizer, UIView;

@interface BTBaseRecommendMsgCellView
{
    UIView *m_highlightMaskView;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    UIView *m_separateLine;
    BTRecommendSectionData *_sectionData;
    MMUIButton *_feedbackBtn;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(readonly, nonatomic) BTRecommendSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (void)handleLongPress:(id)arg1;
- (void)initGestureRecognizer;
- (_Bool)needHighlightLayer;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initHighlightMaskView;
- (void)initSeparateLine;
- (void)onClickFeedbackBtn;
- (void)initFeedbackBtn;
- (unsigned long long)cellRectCorner;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTBaseRecommendMsgCellViewModel *viewModel;

@end

