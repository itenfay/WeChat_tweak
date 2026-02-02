//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView;

@interface BTChannelBarItemView
{
    MMUILabel *m_dotLabel;
    MMWebImageView *m_smallIconImageView;
}

- (void).cxx_destruct;
- (double)layoutSmallIconView;
- (void)layoutDotImageView;
- (void)layoutSubtitleView;
- (void)updateDotImageView;
- (void)initDotImageView;
- (void)initArrowView;
- (void)inititemSubTitleLabel;
- (void)updateSmallIconView;
- (void)initSmallIconView;
- (void)initSubtitleView;
- (void)updateHeaderView;
- (void)initHeaderView;
- (id)channelBarItemViewModel;
- (void)updateViewModel:(id)arg1;

@end

