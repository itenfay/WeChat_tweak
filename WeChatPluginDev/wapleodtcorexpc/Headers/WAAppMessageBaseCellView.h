//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppMessageBaseViewModel;

@interface WAAppMessageBaseCellView
{
}

- (void)onMore:(id)arg1;
- (void)onWAForward:(id)arg1;
- (_Bool)canShowFavoriteMenuItem;
- (void)onTouchUpInside;
- (id)operationMenuItems;

// Remaining properties
@property(readonly, nonatomic) WAAppMessageBaseViewModel *viewModel; // @dynamic viewModel;

@end

