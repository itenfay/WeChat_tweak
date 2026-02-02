//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol WCTTableCoding;

@protocol ISessionStorageDelegate <NSObject>

@optional
- (void)deleteOldVersionSessionCache;
- (long long)compareSession:(id <WCTTableCoding>)arg1 rightSession:(id <WCTTableCoding>)arg2;
- (NSArray *)importSessionsForSessionType:(NSString *)arg1;
- (NSArray *)importSessions;
@end

