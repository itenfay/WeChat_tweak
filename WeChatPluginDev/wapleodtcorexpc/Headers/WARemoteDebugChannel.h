//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WARemoteDebugChannelDelegate;

@interface WARemoteDebugChannel : NSObject
{
    unsigned long long _totalSendLength;
    unsigned long long _lastTotalSendLength;
    unsigned long long _totalReciveLength;
    unsigned long long _lastTotalReciveLength;
    unsigned int _proxyPort;
    id <WARemoteDebugChannelDelegate> _delegate;
    NSString *_wsEndPoint;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain, nonatomic) NSString *wsEndPoint; // @synthesize wsEndPoint=_wsEndPoint;
@property(nonatomic) __weak id <WARemoteDebugChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getTotalReceiveLength;
- (void)addReceiveLength:(unsigned long long)arg1;
- (id)getTotalSendLength;
- (void)addSendLength:(unsigned long long)arg1;
- (void)sendData:(id)arg1;
- (void)sendString:(id)arg1;
- (void)closeChannel;
- (void)openChannel;
- (_Bool)isConnected;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithWsEndPoint:(id)arg1 delegate:(id)arg2;

@end

