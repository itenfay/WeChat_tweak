//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FlutterCgiServiceCallback, NSData, NSString;

@protocol FlutterCgiServiceBase <NSObject>

@optional
- (void)sendAsync:(unsigned long long)arg1 funcId:(long long)arg2 uri:(NSString *)arg3 data:(NSData *)arg4 longPolling:(_Bool)arg5 longPollingTimeout:(long long)arg6;
- (void)setCallback:(FlutterCgiServiceCallback *)arg1;
@end

