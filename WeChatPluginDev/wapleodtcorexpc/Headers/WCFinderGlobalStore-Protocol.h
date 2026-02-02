//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AnyPromise, NSDictionary, NSString;
@protocol WCFinderGlobalStoreIns;

@protocol WCFinderGlobalStore <NSObject>
+ (NSString *)functionName;
- (AnyPromise *)handle:(NSDictionary *)arg1 storeIns:(id <WCFinderGlobalStoreIns>)arg2;
@end

