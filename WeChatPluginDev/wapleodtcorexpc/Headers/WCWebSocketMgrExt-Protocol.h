//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCWebSocketMgrExt <NSObject>
- (void)webSocket:(unsigned int)arg1 group:(NSString *)arg2 didReceiveMessage:(id)arg3;

@optional
- (void)webSocketIDKeyStat:(NSDictionary *)arg1;
- (void)webSocketKVStat:(long long)arg1 kv:(NSString *)arg2;
- (void)destroyWeAppAllSocket:(NSString *)arg1;
- (void)webSocket:(unsigned int)arg1 group:(NSString *)arg2 didCloseWithCode:(long long)arg3 reason:(NSString *)arg4;
- (void)webSocket:(unsigned int)arg1 group:(NSString *)arg2 didOpenWithCode:(long long)arg3 success:(_Bool)arg4 headers:(NSDictionary *)arg5 profiles:(NSDictionary *)arg6 msg:(NSString *)arg7;
@end

