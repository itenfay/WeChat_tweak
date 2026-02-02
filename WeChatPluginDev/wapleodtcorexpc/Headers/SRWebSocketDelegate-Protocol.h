//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, SRWebSocket;

@protocol SRWebSocketDelegate <NSObject>

@optional
- (_Bool)webSocketShouldConvertTextFrameToString:(SRWebSocket *)arg1;
- (void)webSocket:(SRWebSocket *)arg1 didReceivePong:(NSData *)arg2;
- (void)webSocket:(SRWebSocket *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(SRWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(SRWebSocket *)arg1;
- (void)webSocket:(SRWebSocket *)arg1 didReceiveMessageWithData:(NSData *)arg2;
- (void)webSocket:(SRWebSocket *)arg1 didReceiveMessageWithString:(NSString *)arg2;
- (void)webSocket:(SRWebSocket *)arg1 didReceiveMessage:(id)arg2;
@end

