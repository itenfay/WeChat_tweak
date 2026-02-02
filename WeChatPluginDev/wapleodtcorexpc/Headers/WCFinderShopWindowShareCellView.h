//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderShopWindowShareCellViewModel;

@interface WCFinderShopWindowShareCellView
{
}

+ (double)bottomHeight;
+ (id)buildConfig;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutContentView;
- (void)onAppear;

// Remaining properties
@property(retain, nonatomic) WCFinderShopWindowShareCellViewModel *viewModel; // @dynamic viewModel;

@end

