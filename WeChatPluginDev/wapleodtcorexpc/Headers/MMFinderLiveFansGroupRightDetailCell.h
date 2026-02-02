//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIView;

@interface MMFinderLiveFansGroupRightDetailCell
{
    MMUILabel *_levelLabel;
    MMUILabel *_descLabel;
    MMWebImageView *_noticeImageView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMWebImageView *noticeImageView; // @synthesize noticeImageView=_noticeImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
- (void)configWithLevel:(unsigned int)arg1 desc:(id)arg2 imageUrlString:(id)arg3;
- (void)layoutSubviews;
- (double)getProportionLineViewPadding;
- (double)getProportionLineViewLeft;
- (double)getProportionLevelCenterX;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

