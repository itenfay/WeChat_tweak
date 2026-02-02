//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCFinderPreFetchObjectMgrDelegate <NSObject>

@optional
- (void)finderPrefetchFailWithObjectID:(NSArray *)arg1 scene:(int)arg2 errorCode:(long long)arg3 errorMsg:(NSString *)arg4;
- (void)finderPrefetchObjectArray:(NSArray *)arg1 scene:(int)arg2;
@end

