//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoipMonoMsgIdkeyReport : NSObject
{
}

+ (void)receiveIncomingCallUseCallKit;
+ (void)msgSyncInviteInActiveState;
+ (void)pushKitFormMsgOkShowNotification;
+ (void)pushKitReceiveMsg;
+ (void)logicUiOkNotifyMsgTimeUnRealClosePreConnect;
+ (void)logicUiOkNotifyMsgOpenPreConnect;
+ (void)logicUiOkPushKitMsgClosePreConnect;
+ (void)logicUiOkApnsMsgClosePreConnect;
+ (void)logicUiOkSyncMsgClosePreConnect;
+ (void)logicUiErrorInviteType;
+ (void)logicUiErrorPhoneCalling;
+ (void)logicUiErrorMsgTransformFailed;
+ (void)logicUiErrorInviteUserNotExist;
+ (void)logicUiErrorMsgType;
+ (void)logicGetRoomInfoOpenUIOk;
+ (void)logicGetRoomInfoOpenUIError;
+ (void)logicGetRoomInfoRespOk;
+ (void)logicGetRoomInfoErrorRespFail;
+ (void)logicGetRoomInfoErrorRespNull;
+ (void)logicGetRoomInfoErrorTimeOut;
+ (void)logicGetRoomInfoErrorCreate;
+ (void)logicGetRoomInfoErrorPara;
+ (void)logicCancelCloseNotMatch;
+ (void)logicCancelCloseOk;
+ (void)logicCancelTypeAnswerHasAccept;
+ (void)logicCancelErrorMsgNotVaild;
+ (void)logicCancelErrorMsgNotCancelMsg;
+ (void)logicCancelErrorMsgType;
+ (void)logicRejectSendAckBusy;
+ (void)logicRejectErrorInviteUserNotExist;
+ (void)logicRejectNotSyncMsg;
+ (void)logicRejectErrorMsgNotVaild;
+ (void)logicRejectErrorCancelMsgCannotReject;
+ (void)logicRejectErrorMsgType;
+ (void)logicStartGetRoomInfoCgi;
+ (void)logicStartUIDirectlyError;
+ (void)logicStartUIDirectlyOk;
+ (void)logicStartErrorGetRoomInfoCgiRunning;
+ (void)logicStartErrorMsgType;
+ (void)msgSyncCancel;
+ (void)msgSyncInvite;
+ (void)msgNotifyAnswer;
+ (void)msgNotifyCancel;
+ (void)msgNotifyInvite;
+ (void)reportId:(int)arg1 Key:(int)arg2;

@end

