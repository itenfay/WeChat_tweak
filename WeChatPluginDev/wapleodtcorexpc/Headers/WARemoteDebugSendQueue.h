//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol WARemoteDebugSendQueueDelegate;

@interface WARemoteDebugSendQueue : NSObject
{
    double _sendTimestamp;
    CADisplayLink *_sendTimer;
    unsigned int _sendSeq;
    unsigned int _prevSendSeq;
    NSMutableArray *_msgQueue;
    NSMutableArray *_pkgQueue;
    unsigned int _resendCountForSvrBlock;
    unsigned int _resendCountForSvrError;
    _Bool _sendoutImmediately;
    _Bool _isDebuggerRunLoopMode;
    id <WARemoteDebugSendQueueDelegate> _delegate;
}

+ (id)generateUUID;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDebuggerRunLoopMode; // @synthesize isDebuggerRunLoopMode=_isDebuggerRunLoopMode;
@property(nonatomic) _Bool sendoutImmediately; // @synthesize sendoutImmediately=_sendoutImmediately;
@property(nonatomic) __weak id <WARemoteDebugSendQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destorySendTimer;
- (void)initSendTimer;
- (unsigned int)getIntervalSendCount;
- (void)updatePrintInfo;
- (void)sendOrResendPkg;
- (void)resendTryAgain;
- (void)handleSendDebugMsgResp:(id)arg1 uuid:(id)arg2;
- (void)msgQueue2PkgQueue;
- (void)handleQueue;
- (void)sendDebugMsgList:(id)arg1;
- (id)init;
- (void)dealloc;

@end

