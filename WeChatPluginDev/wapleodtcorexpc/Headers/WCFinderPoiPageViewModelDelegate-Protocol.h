//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderPoiPageViewModel;

@protocol WCFinderPoiPageViewModelDelegate <NSObject>

@optional
- (void)finderPoiInvalidWithErrorCode:(int)arg1 viewModel:(WCFinderPoiPageViewModel *)arg2;
- (void)finderPoiNoMoreData:(WCFinderPoiPageViewModel *)arg1;
- (void)finderPoiAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 viewModel:(WCFinderPoiPageViewModel *)arg3;
- (void)finderPoiReloadAllData:(WCFinderPoiPageViewModel *)arg1;
@end

