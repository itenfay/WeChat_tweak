//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderOrderShareCellViewModel;

@interface WCFinderOrderShareCellView
{
}

- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)layoutMiniStyle;
- (void)layoutContentView;

// Remaining properties
@property(retain, nonatomic) WCFinderOrderShareCellViewModel *viewModel; // @dynamic viewModel;

@end

