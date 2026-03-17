//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IAppMsgPathMgr <NSObject>

@optional
+ (void)GetPathOfAppRemindAttach:(CMessageWrap *)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppThumb:(NSString *)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfMaskedAppThumb:(NSString *)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(NSString *)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(NSString *)arg1 LocalID:(unsigned int)arg2 AttachId:(NSString *)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataByUserName:(NSString *)arg1 andMessageWrap:(CMessageWrap *)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataByUserName:(NSString *)arg1 andMessageWrap:(CMessageWrap *)arg2 andAttachId:(NSString *)arg3 andAttachFileExt:(NSString *)arg4 retStrPath:(id *)arg5;
+ (void)GetPathOfAppData:(NSString *)arg1 LocalID:(unsigned int)arg2 FileExt:(NSString *)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDir:(NSString *)arg1 retStrPath:(id *)arg2;
@end

