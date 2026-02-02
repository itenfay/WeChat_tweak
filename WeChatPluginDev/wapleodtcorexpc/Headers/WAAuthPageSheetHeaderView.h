//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIButton, UILabel;

@interface WAAuthPageSheetHeaderView
{
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_applyLabel;
    UIButton *_infoButton;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *applyLabel; // @synthesize applyLabel=_applyLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

@end

