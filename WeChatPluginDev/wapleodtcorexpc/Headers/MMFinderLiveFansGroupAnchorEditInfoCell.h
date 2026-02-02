//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel;

@interface MMFinderLiveFansGroupAnchorEditInfoCell
{
    unsigned long long _layoutStyle;
    UILabel *_lineLabel;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMWebImageView *_webImageView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (id)getTitle;
- (void)configWithTitle:(id)arg1 desc:(id)arg2 imgUrl:(id)arg3 image:(id)arg4;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

