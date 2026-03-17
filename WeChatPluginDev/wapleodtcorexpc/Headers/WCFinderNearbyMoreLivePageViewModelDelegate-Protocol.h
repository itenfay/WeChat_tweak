//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexSet, NSString;

@protocol WCFinderNearbyMoreLivePageViewModelDelegate <NSObject>

@optional
- (_Bool)nearbyLiveAnchorsIsAppearing;
- (void)nearbyLiveAnchorsDeleteWithTid:(NSString *)arg1;
- (void)nearbyLiveAnchorsFetchFailWithErrorCode:(int)arg1;
- (void)nearbyLiveAnchorsNoMoreData;
- (void)nearbyLiveAnchorsAppendToSection:(long long)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 insertSection:(NSIndexSet *)arg4;
- (void)nearbyLiveAnchorsAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 section:(unsigned long long)arg3;
- (void)nearbyLiveAnchorsReloadAllData;
@end

