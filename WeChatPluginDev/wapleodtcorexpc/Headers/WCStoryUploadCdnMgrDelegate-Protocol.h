//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCStoryDataItem, WCStoryPostLimitObj;

@protocol WCStoryUploadCdnMgrDelegate <NSObject>
- (void)onStoryPostRetry:(NSString *)arg1;
- (void)onStoryPostFail:(NSString *)arg1 ErrorType:(long long)arg2;
- (void)onStoryPostSuccess:(WCStoryDataItem *)arg1 LimitObj:(WCStoryPostLimitObj *)arg2;
@end

