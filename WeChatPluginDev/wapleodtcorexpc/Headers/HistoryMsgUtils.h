//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface HistoryMsgUtils : NSObject
{
}

+ (void)reportWhenReceiveInviteMsg:(id)arg1;
+ (void)reportWhenShowHistoryMsg:(id)arg1;
+ (_Bool)isMsgUseCdnUpload:(id)arg1;
+ (_Bool)isCanSendOriginAppMsg:(id)arg1;
+ (_Bool)canSendOriMsg:(id)arg1;
+ (_Bool)isNeedUploadDataMsg:(id)arg1;
+ (id)getThumbnailWithMsgWrap:(id)arg1;
+ (id)covertToAddMsgWithMsgWrap:(id)arg1;
+ (id)genTextMsgWithText:(id)arg1 msgWrap:(id)arg2;
+ (_Bool)checkHistoryUploadInfo:(id)arg1;
+ (_Bool)isCloseOldHistoryMsgUpload;
+ (_Bool)isOpenNewHistoryMsgUpload;
+ (_Bool)isOpenNewHistoryMsgShow;
+ (_Bool)isJoinGroupMsgNeedDownloadMsg:(id)arg1;

@end

