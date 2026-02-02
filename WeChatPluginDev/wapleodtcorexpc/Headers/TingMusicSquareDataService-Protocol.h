//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenDiscoverItem, MMListenDiscoverLine, TingDiscoverCacheInfo, TingMusicSquareDataWrap, TingMusicSquareFetchContext;
@protocol TingMusicSquareDataServiceListener;

@protocol TingMusicSquareDataService <NSObject, UnitRCBaseProtocol>
- (void)saveCachedData:(TingDiscoverCacheInfo *)arg1;
- (TingDiscoverCacheInfo *)getCachedData;
- (void)updateSingleDiscoverItem:(MMListenDiscoverItem *)arg1 line:(MMListenDiscoverLine *)arg2;
- (int)getLoadingStatus;
- (TingMusicSquareDataWrap *)getSquareData;
- (void)stopFetching;
- (TingMusicSquareFetchContext *)fetchData:(TingMusicSquareFetchContext *)arg1;
- (_Bool)removeListener:(id <TingMusicSquareDataServiceListener>)arg1;
- (_Bool)addListener:(id <TingMusicSquareDataServiceListener>)arg1;
@end

