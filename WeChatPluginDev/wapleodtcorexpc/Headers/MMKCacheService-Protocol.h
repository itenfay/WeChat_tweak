//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MMKCacheService <NSObject>
- (void)setInt64:(NSString *)arg1 data:(long long)arg2 ttl:(long long)arg3;
- (long long)getInt64:(NSString *)arg1 defaultValue:(long long)arg2;
- (_Bool)getBool:(NSString *)arg1;
- (void)setBool:(NSString *)arg1 data:(_Bool)arg2 ttl:(long long)arg3;
- (_Bool)remove:(NSString *)arg1;
- (NSData *)get:(NSString *)arg1;
- (void)set:(NSString *)arg1 data:(NSData *)arg2 ttl:(long long)arg3;
@end

