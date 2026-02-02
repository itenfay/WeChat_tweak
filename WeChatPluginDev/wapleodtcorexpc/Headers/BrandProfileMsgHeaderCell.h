//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileMsgHeaderViewModel, MMUILabel, UIImageView;

@interface BrandProfileMsgHeaderCell
{
    MMUILabel *_titleLabel;
    UIImageView *_foldImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *foldImgView; // @synthesize foldImgView=_foldImgView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)initFoldImgView;
- (void)updateSubviews;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BrandProfileMsgHeaderViewModel *viewModel; // @dynamic viewModel;

@end

