//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecoFlowSeparatorLineView, MMUILabel, MMWebImageView;

@interface BTRecoFlowTopicMsgCell
{
    _Bool _isFirstRow;
    _Bool _isLastRow;
    MMUILabel *_titleLabel;
    MMWebImageView *_coverView;
    BTRecoFlowSeparatorLineView *_topSeparatorView;
    BTRecoFlowSeparatorLineView *_bottomSeparatorView;
    double _bottomSeparatorLeftPadding;
    double _bottomSeparatorRightPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomSeparatorRightPadding; // @synthesize bottomSeparatorRightPadding=_bottomSeparatorRightPadding;
@property(nonatomic) double bottomSeparatorLeftPadding; // @synthesize bottomSeparatorLeftPadding=_bottomSeparatorLeftPadding;
@property(retain, nonatomic) BTRecoFlowSeparatorLineView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) BTRecoFlowSeparatorLineView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
@property(nonatomic) _Bool isFirstRow; // @synthesize isFirstRow=_isFirstRow;
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)generateSeparatorView;

@end

