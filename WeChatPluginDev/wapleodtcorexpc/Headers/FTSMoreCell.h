//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface FTSMoreCell
{
    UIImageView *_moreIcon;
    UIImageView *_rightArrowIcon;
    UILabel *_moreTipLabel;
    UIView *_topLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *moreTipLabel; // @synthesize moreTipLabel=_moreTipLabel;
@property(retain, nonatomic) UIImageView *rightArrowIcon; // @synthesize rightArrowIcon=_rightArrowIcon;
@property(retain, nonatomic) UIImageView *moreIcon; // @synthesize moreIcon=_moreIcon;
- (void)layoutSubviews;
- (void)updateViewMoreTip:(id)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

