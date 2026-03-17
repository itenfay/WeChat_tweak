//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCFinderNearbyViewModelDelegate <NSObject>

@optional
- (void)nearByDataPullLoadingFinish:(unsigned long long)arg1;
- (void)nearByLocationServiceAuthorizationChanged:(_Bool)arg1;
- (void)nearByNextPageAppendData:(NSArray *)arg1;
- (void)nearByDataSourceChanged;
- (void)nearByLocalDataFetchScuccess;
- (void)nearBySourceNoMoreData:(unsigned long long)arg1;
- (void)nearByDataSourceFetchError:(unsigned long long)arg1;
- (void)nearByDataSourceLocalEmpty;
- (void)nearByLiveDataRefreshData;
- (void)nearByLiveDataChanged;
- (void)nearByLiveDataFetchFinish:(_Bool)arg1;
- (void)nearByLiveDataNoMore;
@end

