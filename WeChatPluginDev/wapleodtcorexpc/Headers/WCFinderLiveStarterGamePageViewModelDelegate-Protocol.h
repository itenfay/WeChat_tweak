//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderLiveStarterGamePageViewModelDelegate <NSObject>

@optional
- (void)onLiveHomeGameTabLiveStreamFetchFailWithErrorCode:(int)arg1;
- (void)onLiveHomeGameTabLiveStreamNoMoreData;
- (void)onLiveGameTabLiveStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveGameTabLiveStreamReloadAllData;
@end

