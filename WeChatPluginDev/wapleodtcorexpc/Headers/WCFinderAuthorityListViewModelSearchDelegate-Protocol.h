//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol WCFinderAuthorityListViewModelProtocol;

@protocol WCFinderAuthorityListViewModelSearchDelegate <NSObject>

@optional
- (void)viewModelSearchResultRequestNextPageFailed:(id <WCFinderAuthorityListViewModelProtocol>)arg1 errorMsg:(NSString *)arg2;
- (void)viewModelSearchResultHasNoMoreData:(id <WCFinderAuthorityListViewModelProtocol>)arg1;
- (void)viewModel:(id <WCFinderAuthorityListViewModelProtocol>)arg1 onSearchResultUpdated:(NSArray *)arg2;
@end

