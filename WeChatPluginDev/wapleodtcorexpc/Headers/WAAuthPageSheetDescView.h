//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WAAuthPageSheetDescView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (id)createAttrTitle:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

@end

