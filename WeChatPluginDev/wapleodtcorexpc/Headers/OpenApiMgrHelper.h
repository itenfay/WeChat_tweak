//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OpenApiMgrHelper : NSObject
{
}

+ (long long)getVideoDurationFromVideoPath:(id)arg1;
+ (id)getTmpOpenApiVideoPathWithData:(id)arg1 videoType:(unsigned int)arg2;
+ (_Bool)saveLocalData:(id)arg1 toPath:(id)arg2;
+ (id)genCaptureVideoInfoWithVideoData:(id)arg1 mediaMessage:(id)arg2 param:(id)arg3;
+ (id)genBaseVideoMsgWithMediaMessage:(id)arg1 appId:(id)arg2;
+ (id)formVideoMessageWithVideoData:(id)arg1 param:(id)arg2;
+ (void)asyncFormVideoMessageWithVideoData:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)createMusicVideoCDNMediaInfo:(id)arg1;
+ (id)transferImageDataToTargetSize:(id)arg1;
+ (id)parseURLParams:(id)arg1;
+ (id)parseURLParamsByDecodeOnce:(id)arg1;
+ (id)checkWebSendAppMsgThumbData:(id)arg1;
+ (id)checkAppMsgThumbData:(id)arg1;
+ (id)getNetWorkErrorHtml;
+ (void)checkShowTabbar;
+ (void)hideChatViewKeyborad;
+ (id)makeURLMessageForShareTo3rdApp:(id)arg1 withTitle:(id)arg2;
+ (id)makeTextMessageForShareTo3rdApp:(id)arg1;
+ (id)makeLocationMessageForShareTo3rdAppWithLatitude:(double)arg1 andLongitude:(double)arg2 title:(id)arg3;
+ (id)makeMediaMessageForShareTo3rdApp:(id)arg1 withType:(long long)arg2;
+ (void)makeFileInternalMessage:(id)arg1;
+ (id)makeFileAppCommunicateData:(id)arg1;
+ (_Bool)isLogin;
+ (id)createConfirmLogicHelper:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 showTextView:(_Bool)arg4 appScene:(unsigned int)arg5;
+ (id)createConfirmLogicHelper:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 showTextView:(_Bool)arg4 appScene:(unsigned int)arg5 redirectUrl:(id)arg6;
+ (id)FormMessage:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 redirectUrl:(id)arg4;
+ (id)FormAppMessage:(id)arg1 withAppMessage:(id)arg2 appID:(id)arg3;
+ (id)FormTextMsg:(id)arg1 withText:(id)arg2 appID:(id)arg3;

@end

