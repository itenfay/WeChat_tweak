//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol MegaVideoMainFeedService <NSObject, UnitRCBaseProtocol>
- (void)fetchData:(_Bool)arg1 ignoreCache:(_Bool)arg2 cleanUpExisting:(_Bool)arg3 callback:(void (^)(NSArray *))arg4;
@end

