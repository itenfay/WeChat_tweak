//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface WCMomentsBizOriginalArticleButton
{
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UILabel *_centerLabel;
    UIView *_hightLightMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hightLightMaskView; // @synthesize hightLightMaskView=_hightLightMaskView;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)init;

@end

