//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRichTextTagView, BrandProfileItemBaseViewModel, MMUILabel, MMWebImageView, UIView;

@interface BrandProfileItemBaseCell
{
    MMWebImageView *_coverImageView;
    BTRichTextTagView *_titleView;
    MMUILabel *_descLabel;
    UIView *_separateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) BTRichTextTagView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)layoutSeparateLine;
- (void)layoutSubviews;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)updateCoverImageView;
- (void)updateDescLabel;
- (void)updateTitleView;

// Remaining properties
@property(retain, nonatomic) BrandProfileItemBaseViewModel *viewModel; // @dynamic viewModel;

@end

