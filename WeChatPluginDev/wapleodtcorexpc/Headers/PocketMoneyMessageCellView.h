//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PocketMoneyMessageViewModel, RichTextView, UIImageView;

@interface PocketMoneyMessageCellView
{
    RichTextView *_titleLabel;
    RichTextView *_descLabel;
    UIImageView *_thumbImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onTouchUpInside;
- (void)addThumbImageView;
- (void)addDescLabel;
- (void)addTitleLabel;
- (void)layoutContentView;
- (id)operationMenuItems;

// Remaining properties
@property(readonly, nonatomic) PocketMoneyMessageViewModel *viewModel; // @dynamic viewModel;

@end

