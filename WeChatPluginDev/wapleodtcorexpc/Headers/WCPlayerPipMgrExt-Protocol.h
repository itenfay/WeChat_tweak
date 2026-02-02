//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPipContentSourcePlayer, WCPlayerPipSessionInfo;

@protocol WCPlayerPipMgrExt <NSObject>

@optional
- (void)onPlayerDidStopPictureInPicture:(WCPlayerPipSessionInfo *)arg1;
- (void)onPlayerRestoreUserInterface;
- (void)onPlayerWillStopPictureInPicture;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayerWillStartPictureInPicture;
- (void)onPipSourcePlayerUnRegisterPipResource:(WCPipContentSourcePlayer *)arg1;
@end

