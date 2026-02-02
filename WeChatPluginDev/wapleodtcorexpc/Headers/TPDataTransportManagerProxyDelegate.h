//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPPlayerEventPublisher;
@protocol TPProxyPlayDelegate;

@interface TPDataTransportManagerProxyDelegate : NSObject
{
    id <TPProxyPlayDelegate> _outerDelegate;
    TPPlayerEventPublisher *_publisher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerEventPublisher *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) __weak id <TPProxyPlayDelegate> outerDelegate; // @synthesize outerDelegate=_outerDelegate;
- (id)onPlayCallbackWithMessageType:(unsigned long long)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extraInfo:(id)arg5;
- (void)onDownloadFinish;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (long long)getPlayerBufferLength;
- (id)getPlayInfo:(id)arg1;
- (long long)getCurrentPosition;
- (long long)getCurrentPlayOffset;
- (int)getCurrentPlayClipNo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

