//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMConfSDKCGIImp : NSObject
{
    NSString *_currentRequestAppId;
    CDUnknownBlockType _currentGetAuthCodeCGICallback;
    CDUnknownBlockType _currentGetSDKUserInfoCGICallback;
    CDUnknownBlockType _currentSendBannerMsgCGICallback;
    CDUnknownBlockType _currentScreenSharingSecurityCheckCGICallback;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cgiSendCloudIlinkRequest:(unsigned int)arg1 request:(id)arg2;
- (void)sendRequestWithoutPBW:(id)arg1 Retry:(int)arg2;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)cgiScreenSharingSecurityCheck:(unsigned int)arg1 groupid:(id)arg2 sdkGroupId:(id)arg3 fromUserName:(id)arg4 fromSdkUserName:(id)arg5 roomId:(long long)arg6 sharingFileMd5:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)cgiReportLog:(id)arg1 sdkGroupId:(id)arg2 fromUserName:(id)arg3 fromSdkUserName:(id)arg4 reportList:(id)arg5;
- (void)cgiSendBannerMsg:(unsigned int)arg1 groupid:(id)arg2 roomId:(long long)arg3 fromUserName:(id)arg4 fromSdkUserName:(id)arg5 bannerMsg:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)cgiGetSDKUserInfo:(unsigned int)arg1 sdkUserList:(id)arg2 groupId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)cgiGetAuthCode:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;

@end

