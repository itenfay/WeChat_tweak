//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecoFlowSeparatorLineView, MMUIButton, MMUILabel, MMWebImageView, NSMutableArray, UIButton;

@interface BTRecoFlowMsgCell
{
    MMUIButton *_xButton;
    MMUILabel *_titleLabel;
    MMUILabel *_digestLabel;
    UIButton *_tagLabel;
    MMUIButton *_aggregationLabel;
    MMUILabel *_subtitleLabel;
    UIButton *_playButton;
    UIButton *_smallPictureButton;
    BTRecoFlowSeparatorLineView *_bottomSeparatorView;
    double _bottomSeparatorLeftPadding;
    double _bottomSeparatorRightPadding;
    NSMutableArray *_webImageViewList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *webImageViewList; // @synthesize webImageViewList=_webImageViewList;
@property(nonatomic) double bottomSeparatorRightPadding; // @synthesize bottomSeparatorRightPadding=_bottomSeparatorRightPadding;
@property(nonatomic) double bottomSeparatorLeftPadding; // @synthesize bottomSeparatorLeftPadding=_bottomSeparatorLeftPadding;
@property(retain, nonatomic) BTRecoFlowSeparatorLineView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIButton *smallPictureButton; // @synthesize smallPictureButton=_smallPictureButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUIButton *aggregationLabel; // @synthesize aggregationLabel=_aggregationLabel;
@property(retain, nonatomic) UIButton *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) MMUILabel *digestLabel; // @synthesize digestLabel=_digestLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *xButton; // @synthesize xButton=_xButton;
- (id)accessibilityLabel;
- (void)onClickAggregationLabel;
- (void)onClickFeedbackBtn;
- (id)webImageViewAtIndex:(long long)arg1;
- (void *)buildBottomSeparatorView:(void *)arg1;
- (void *)buildSubtitleHorizontalStack:(void *)arg1;
- (void)updateWithTitle:(id)arg1 recommendTag:(id)arg2 aggregationTitle:(id)arg3 iconType:(unsigned int)arg4 recommendWording:(id)arg5;
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;
- (void)layoutSubviews;
- (struct CGSize)playButtonSize;
- (struct CGSize)smallPictureButtonSize;
@property(readonly, nonatomic) MMWebImageView *coverView;
- (id)generateSeparatorView;

@end

