//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCFinderEndorsementCellViewModel;

@interface WCFinderEndorsementCellView
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (id)nameLabel;
- (id)displayIconName;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WCFinderEndorsementCellViewModel *viewModel; // @dynamic viewModel;

@end

