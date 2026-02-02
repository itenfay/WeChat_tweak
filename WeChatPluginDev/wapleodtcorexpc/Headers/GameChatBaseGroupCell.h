//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIColor, UILabel, UIView;

@interface GameChatBaseGroupCell
{
    MMWebImageView *_webImageView;
    UILabel *_groupNameLabel;
    UILabel *_gcMidDescLabel;
    UIView *_bottomView;
    UIView *_bgCornerView;
    UIView *_redDotView;
    UILabel *_topLabel;
    UIColor *_gcNormalTextColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *gcNormalTextColor; // @synthesize gcNormalTextColor=_gcNormalTextColor;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIView *bgCornerView; // @synthesize bgCornerView=_bgCornerView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *gcMidDescLabel; // @synthesize gcMidDescLabel=_gcMidDescLabel;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
- (id)attributeDescForModel:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (double)verticalAlignCenterY;
- (double)maxRight;
- (double)labelLeft;
- (id)verticalAlignArrary;
- (_Bool)supportStickTop;
- (id)initWithFrame:(struct CGRect)arg1;

@end

