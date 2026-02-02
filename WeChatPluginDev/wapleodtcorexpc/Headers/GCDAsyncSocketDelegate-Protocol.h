//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderGCDAsyncSocket, NSData, NSError, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@protocol GCDAsyncSocketDelegate <NSObject>

@optional
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)socketDidSecure:(MMFinderGCDAsyncSocket *)arg1;
- (void)socketDidDisconnect:(MMFinderGCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidCloseReadStream:(MMFinderGCDAsyncSocket *)arg1;
- (double)socket:(MMFinderGCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(MMFinderGCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didConnectToUrl:(NSURL *)arg2;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(MMFinderGCDAsyncSocket *)arg1 didAcceptNewSocket:(MMFinderGCDAsyncSocket *)arg2;
- (NSObject<OS_dispatch_queue> *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(MMFinderGCDAsyncSocket *)arg2;
@end

