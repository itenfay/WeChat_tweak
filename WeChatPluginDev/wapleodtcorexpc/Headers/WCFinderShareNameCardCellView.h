//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCFinderAuthInfoIconView, WCFinderShareNameCardCellViewModel;

@interface WCFinderShareNameCardCellView
{
    UILabel *_nameLabel;
    UILabel *_descLabel;
    WCFinderAuthInfoIconView *_icon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAuthInfoIconView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WCFinderShareNameCardCellViewModel *viewModel; // @dynamic viewModel;

@end

