//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString;

@protocol TPDLProxyPlayDelegate <NSObject>

@optional
- (id)getPlayInfo:(NSString *)arg1;
- (long long)getAdvRemainTime;
- (int)getCurrentPlayClipNo;
- (long long)getCurrentPlayOffset;
- (long long)getCurrentPosition;
- (long long)getPlayerBufferLength;
- (void)onDownloadProtocolUpdateWithProtocol:(NSString *)arg1 protocolVer:(NSString *)arg2;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(NSDictionary *)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(NSString *)arg1 cdnIP:(NSString *)arg2 uIP:(NSString *)arg3 errcodeStr:(NSString *)arg4;
- (void)onDownloadCdnUrlUpdate:(NSString *)arg1;
- (id)onPlayCallbackWithMessageType:(int)arg1 ext1:(NSObject *)arg2 ext2:(NSObject *)arg3 ext3:(NSObject *)arg4 ext4:(NSObject *)arg5;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(NSString *)arg3;
- (void)onDownloadFinish;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extInfo:(NSString *)arg5;
@end

