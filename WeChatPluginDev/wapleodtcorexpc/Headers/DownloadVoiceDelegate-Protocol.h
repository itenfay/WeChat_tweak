//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol DownloadVoiceDelegate <NSObject>

@optional
- (void)onCDNDownloadFail:(NSString *)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(NSString *)arg5;
- (void)OnRecvData:(NSString *)arg1 MesLocalID:(unsigned int)arg2 n64MesSvrID:(long long)arg3 CreateTime:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 Offset:(unsigned int)arg6 Len:(unsigned int)arg7 Data:(NSData *)arg8 EndFlag:(unsigned int)arg9 ErrNo:(unsigned int)arg10;
@end

