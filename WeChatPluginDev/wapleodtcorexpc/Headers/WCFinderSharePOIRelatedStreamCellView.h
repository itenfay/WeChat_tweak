//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel, WCFinderSharePOIRelatedStreamCellViewModel;

@interface WCFinderSharePOIRelatedStreamCellView
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMWebImageView *_webImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)layoutContentView;

// Remaining properties
@property(retain, nonatomic) WCFinderSharePOIRelatedStreamCellViewModel *viewModel;

@end

