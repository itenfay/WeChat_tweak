//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "FavBaseSearchViewControllerDelegate-Protocol.h"

@class MMUIViewController, OrderedDictionary, UIScrollView;

@protocol FavAddressDataControllerDelegate <FavBaseSearchViewControllerDelegate>
- (unsigned long long)getMaxSelectedCount;
- (OrderedDictionary *)getSelectedDic;
- (void)onShowEmptyView;
- (unsigned long long)cellStyle;
- (void)onAddressViewDidScroll:(UIScrollView *)arg1;
- (void)onReloadData;
- (MMUIViewController *)getCurrentViewController;
@end

