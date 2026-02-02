//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTShowMoreItemCellViewModel, RichTextView, UIImageView, UIView;

@interface BTShowMoreItemCellView
{
    RichTextView *m_tipsLabel;
    UIImageView *m_dropDownIcon;
    UIView *m_separateLine;
    UIView *m_highlightMaskView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initHighlightMaskView;
- (void)updateLabelStyles;
- (void)initSubviews;
- (void)initContentView;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTShowMoreItemCellViewModel *viewModel; // @dynamic viewModel;

@end

