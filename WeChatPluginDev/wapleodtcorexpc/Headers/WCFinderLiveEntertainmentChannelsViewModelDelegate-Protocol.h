//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderLiveEntertainmentChannelsViewModelDelegate <NSObject>

@optional
- (void)onEntertainmentChannelsViewModelLoadDataFailed:(long long)arg1;
- (void)onEntertainmentChannelsViewModelLoadDataSuccess;
- (NSString *)currentSelectTag;
@end

