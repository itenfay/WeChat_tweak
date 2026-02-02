//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol LocalAreaCommunicationClientDelegate <NSObject>
- (void)onClientTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)onClientDisconnect;
- (void)onClientConnectFail;
- (void)onClientReciveData:(NSData *)arg1 andLength:(unsigned int)arg2;
@end

