//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderProfileDraftListViewModel;

@protocol WCFinderProfileDraftListViewModelDelegate <NSObject>
- (void)viewModel:(WCFinderProfileDraftListViewModel *)arg1 deleteItemAtIdx:(long long)arg2;
- (void)viewModel:(WCFinderProfileDraftListViewModel *)arg1 fetchDataError:(NSString *)arg2;
- (void)viewModelDataChanged:(WCFinderProfileDraftListViewModel *)arg1;
@end

