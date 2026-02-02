//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EntertainmentChannelsTagDataModel;

@protocol WCFinderLiveEntertainmentChannelsTagStreamVMDelegate <NSObject>

@optional
- (void)onLiveEntertainmentChannelsTagStreamFetchFailWithErrorCode:(int)arg1;
- (void)onLiveEntertainmentChannelsTagStreamNoMoreData;
- (void)onLiveEntertainmentChannelsTagStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveEntertainmentChannelsTagStreamReloadAllData:(EntertainmentChannelsTagDataModel *)arg1;
@end

