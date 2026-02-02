//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel;

@interface WASMTPageSheetHeaderView
{
    UIButton *_backButton;
    UILabel *_titleLabel;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)setViewDataModel:(id)arg1;

@end

