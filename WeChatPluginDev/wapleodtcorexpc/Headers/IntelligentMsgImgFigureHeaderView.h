//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel;

@interface IntelligentMsgImgFigureHeaderView
{
    MMUILabel *m_titleLabel;
    MMUIImageView *m_figureImageView;
    MMUILabel *m_figureCountLabel;
}

- (void).cxx_destruct;
- (double)calculationHeight;
- (void)updateFigureImageView:(id)arg1 figureCount:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)layoutFigureCountLabel;
- (void)layoutFigureImageView;
- (void)layoutTitleLabel;
- (void)layoutView;
- (id)init;

@end

