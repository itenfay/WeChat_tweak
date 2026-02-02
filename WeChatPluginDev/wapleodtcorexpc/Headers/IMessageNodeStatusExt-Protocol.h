//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IMessageNodeStatusExt <NSObject>

@optional
- (void)onMessageDownloadVideoFail;
- (void)onMessageDownloadVideoExpired;
- (void)onMessageDownloadAppAttachFail;
- (void)onMessageDownloadAppAttachExpired;
- (void)onMessageDownloadThumbImageOK;
- (void)onMessageForceUpdateLayout;
- (void)onMessageUpdateStatus;
- (void)onMessageStopPlaying;
- (void)onMessageStartPlaying;
@end

