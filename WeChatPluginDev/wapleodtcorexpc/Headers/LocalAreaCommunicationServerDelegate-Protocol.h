//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol LocalAreaCommunicationServerDelegate <NSObject>
- (void)onServerTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)onServerDisconnect;
- (void)onServerConnected;
- (void)onServerReciveData:(NSData *)arg1 andLength:(unsigned int)arg2;
@end

