//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileMsgFooterViewModel, MMUILabel, UIImageView;

@interface BrandProfileMsgFooterCell
{
    MMUILabel *_label;
    UIImageView *_iconImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BrandProfileMsgFooterViewModel *viewModel; // @dynamic viewModel;

@end

