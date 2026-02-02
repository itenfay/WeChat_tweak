//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPlayerCoreAdapterDelegate <NSObject>

@optional
- (NSString *)GetAppVersion;
- (NSString *)GetExpt:(NSString *)arg1 withDef:(NSString *)arg2;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)WCPlayerCoreLog:(int)arg1 toMMFile:(_Bool)arg2 module:(const char *)arg3 file:(const char *)arg4 line:(int)arg5 funcName:(const char *)arg6 message:(NSString *)arg7;
@end

