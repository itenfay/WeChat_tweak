//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderObjectMonotonicData, NSArray, NSString;

@protocol NewLifeSyncStatusExt <NSObject>

@optional
- (void)onJumpInfoStatusChangeForFeedId:(NSString *)arg1 scene:(unsigned int)arg2 jumpInfos:(NSArray *)arg3;
- (void)onGetFeedId:(NSString *)arg1 forEncryptId:(NSString *)arg2;
- (void)onFollowStatusChangeForFinderUsername:(NSString *)arg1 isFollow:(_Bool)arg2;
- (void)onFeedStatusChangeForFeedId:(unsigned long long)arg1 source:(unsigned int)arg2 components:(unsigned int)arg3 monotonicData:(FinderObjectMonotonicData *)arg4;
@end

