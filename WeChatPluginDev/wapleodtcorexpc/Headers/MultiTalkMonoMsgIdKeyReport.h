//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MultiTalkMonoMsgIdKeyReport : NSObject
{
}

+ (void)sysCallCannotAccept;
+ (void)sysCallCannotCreate;
+ (void)pushKitReceiveMsg;
+ (void)logicCancelOk;
+ (void)logicCancelCloseNotification;
+ (void)logicCancelErrorMsgNotVaild;
+ (void)logicCancelErrorNotCancelMsg;
+ (void)logicCancelErrorMsgType;
+ (void)logicRejectOk;
+ (void)logicRejectMsgThaSameWithUI;
+ (void)logicRejectErrorMsgNotVaild;
+ (void)logicRejectErrorNotInviteMsg;
+ (void)logicRejectErrorMsgType;
+ (void)logicStartShowNotification;
+ (void)logicStartUIOk;
+ (void)logicStartStrangerAutoReject;
+ (void)logicStartErrorMsgNotVaild;
+ (void)logicStartErrorNotInviteMsg;
+ (void)logicStartErrorMsgType;
+ (void)msgSyncCancel;
+ (void)msgSyncInvite;
+ (void)msgServerBlockMultiTalk;
+ (void)reportId:(int)arg1 Key:(int)arg2;

@end

