//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIImageView, UILabel, WAAppMessageViewModel;

@interface WAAppMessageCellView
{
    UILabel *_cardTitleLabel;
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_newsTitleLabel;
    UIImageView *_thumbImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *newsTitleLabel; // @synthesize newsTitleLabel=_newsTitleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
- (void)initWAAppDefaultNewsView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WAAppMessageViewModel *viewModel; // @dynamic viewModel;

@end

