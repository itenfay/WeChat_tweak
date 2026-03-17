//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RedPacketStoryInfo, RedPacketStoryInfo_WxappInfo;

@protocol WCRedEnvelopesStoryViewControllerDelegate <NSObject>
- (void)onWCRedEnvelopesStoryViewControlleClickWxAppInfo:(RedPacketStoryInfo_WxappInfo *)arg1;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadFail;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadOK;
- (void)onWCRedEnvelopesStoryViewControlleClickJumpAction:(RedPacketStoryInfo *)arg1 sameReceiveLink:(NSString *)arg2;
- (void)onWCRedEnvelopesStoryViewControllerClickCloseBtn;
@end

