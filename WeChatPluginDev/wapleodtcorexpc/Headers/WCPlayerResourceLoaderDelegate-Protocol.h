//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCDownloadArgsWrap;

@protocol WCPlayerResourceLoaderDelegate <NSObject>
- (void)onResourceloaderNoAnyLoadingRequest;
- (void)onRecieveAllVideoData;
- (void)onRequestDataAvailable;
- (void)onRecieveSeekLoadingRequest;

@optional
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onSwitchDataSource:(WCDownloadArgsWrap *)arg1;
- (void)onResponseDataToResourceLoaderFail:(NSString *)arg1;
- (void)onVideoMoovReady;
- (void)onM3u8Ready;
- (void)onVideoDownloadFail:(int)arg1;
- (void)onChangeVideoSource;
@end

