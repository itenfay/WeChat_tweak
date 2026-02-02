//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, UILabel;

@interface BTRecoFlowMsgBigPicCell
{
    UILabel *_videoDurationLabel;
    CAGradientLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
- (id)accessibilityLabel;
- (_Bool)shouldShowTitleAboveCoverViewWithItemMsg:(id)arg1;
- (void)initMaskLayer;
- (void)removeCoverMaskLayer;
- (void)configureTitleParams:(id)arg1;
- (void)configureCoverMaskLayer:(id)arg1;
- (void)configurateMediaIcon:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)bigPlayButtonSize;
- (void)updateWithItemMsg:(id)arg1 cellWidth:(double)arg2;

@end

