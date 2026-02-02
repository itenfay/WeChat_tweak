//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTReaderStyleRecommendMsgCellViewModel, CAGradientLayer, MMUILabel, MMWebImageView, RichTextView;

@interface BTReaderStyleRecommendMsgCellView
{
    MMWebImageView *m_coverImageView;
    RichTextView *m_titleLabel;
    RichTextView *m_digestLabel;
    MMUILabel *m_recReasonLabel;
    CAGradientLayer *m_maskLayer;
}

- (void).cxx_destruct;
- (void)updateImage:(id)arg1 widthUrl:(id)arg2;
- (void)initCoverMask;
- (void)initRecReasonView;
- (void)initDigestView;
- (void)initTitleView;
- (id)coverImageView;
- (void)initCoverView;
- (void)layoutNormalCoverItem;
- (void)layoutLargeCoverItem;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTReaderStyleRecommendMsgCellViewModel *viewModel;

@end

