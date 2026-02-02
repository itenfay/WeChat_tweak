//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTReaderStyleRecommendMsgShowAllCellViewModel, MMUILabel, UIImageView;

@interface BTReaderStyleRecommendMsgShowAllCellView
{
    MMUILabel *m_titleLabel;
    UIImageView *m_arrowView;
}

- (void).cxx_destruct;
- (void)initArrowView;
- (void)initTitleLabel;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTReaderStyleRecommendMsgShowAllCellViewModel *viewModel;

@end

