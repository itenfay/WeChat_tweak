//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCFinderContactNameHeadInfo;
@protocol WCFinderAuthorityListViewModelProtocol;

@protocol WCFinderAuthorityListViewModelDelegate <NSObject>

@optional
- (NSString *)viewModelGetHeaderTips;
- (void)viewModelBatchConfigFinish:(id <WCFinderAuthorityListViewModelProtocol>)arg1 hasFailed:(_Bool)arg2;
- (void)viewModelLoadFailed:(NSString *)arg1;
- (void)viewModelDataDidChanged:(id <WCFinderAuthorityListViewModelProtocol>)arg1;
- (void)viewModelRemoveItemAtIndexPath:(NSIndexPath *)arg1;
- (void)viewModelRemovedItemFailed:(WCFinderContactNameHeadInfo *)arg1 errorInfo:(NSString *)arg2;
- (void)viewModelHasNoMoreData:(id <WCFinderAuthorityListViewModelProtocol>)arg1;
@end

