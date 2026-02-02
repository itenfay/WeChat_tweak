//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OpenIMUtil : NSObject
{
}

+ (void)reportOpenIMNewSucceedContactdWithReportSessionID:(id)arg1 reportActionCode:(int)arg2 resignationWorkUsername:(id)arg3 takeOverWorkUsername:(id)arg4 workEnterpriseDescId:(id)arg5 workEnterpriseName:(id)arg6;
+ (void)reportOpenIMChatRoomClickGroupMemberHeaderImage:(id)arg1;
+ (void)reportOpenIMSucceedContactdWithReportSessionID:(id)arg1 reportUserName:(id)arg2 reportSucceedStatus:(int)arg3 reportUserStatus:(int)arg4 reportShowSucceedMethod:(int)arg5 reportClickSucceedAction:(int)arg6 reportWatchMessageRecord:(int)arg7 reportSendMessageStatus:(int)arg8;
+ (void)reportOpenIMSearchFriendWithReportSessionID:(id)arg1 reportActionCode:(int)arg2 reportActionResult:(int)arg3 reportClickAddContact:(int)arg4;
+ (void)reportOpenIMChatRoomWithReportScene:(int)arg1 chatRoomUserName:(id)arg2;
+ (void)showOpenIMStorageMakeSureViewController:(id)arg1 privacyAgreementUrl:(id)arg2 fromVC:(id)arg3;
+ (_Bool)checkIsOpenImChatWithViewController:(id)arg1;

@end

