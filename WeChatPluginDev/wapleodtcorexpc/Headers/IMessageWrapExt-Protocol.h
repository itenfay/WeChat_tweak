//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CaptureVideoInfo, NSString;

@protocol IMessageWrapExt <NSObject>

@optional
+ (void)CreateVideoMsg:(NSString *)arg1 ToUsr:(NSString *)arg2 VideoInfo:(CaptureVideoInfo *)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
+ (void)CreateExtendInfoWithUserName:(NSString *)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(_Bool *)arg3;
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@end

