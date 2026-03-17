//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderJumpInfoAsyncLoadManager, WCFinderJumpInfoAsyncLoadRecord;

@protocol WCFinderJumpInfoAsyncLoadManagerExt <NSObject>

@optional
- (void)finderJumpInfoAsyncLoadManager:(WCFinderJumpInfoAsyncLoadManager *)arg1 didUpdateRecord:(WCFinderJumpInfoAsyncLoadRecord *)arg2 withStyles:(NSArray *)arg3;
- (void)finderJumpInfoAsyncLoadManager:(WCFinderJumpInfoAsyncLoadManager *)arg1 didFetchJumpInfoStylesWithRecord:(WCFinderJumpInfoAsyncLoadRecord *)arg2 updated:(_Bool)arg3;
@end

