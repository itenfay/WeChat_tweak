//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGBackupInterface : NSObject
{
}

+ (id)getIDFromVoipIniteMsg:(id)arg1;
+ (id)getPayMsgSendIDFromURL:(id)arg1;
+ (id)getIDFromPayMsg:(id)arg1;
+ (_Bool)isTextMessage:(id)arg1;
+ (void)makeupMessageWrap:(id)arg1;
+ (_Bool)isSpecialMsgInRoomContent:(id)arg1;
+ (_Bool)isSpecialMsgMayNotHaveSvrid:(id)arg1;
+ (_Bool)extAppMsgSupportBackup:(id)arg1;
+ (_Bool)extMsgSupportBackup:(id)arg1;
+ (_Bool)isMsgWrapSupportRoam:(id)arg1;
+ (_Bool)isMsgWrapSupportBackup:(id)arg1;
+ (void)changeForBackup:(id)arg1;
+ (_Bool)isBakChatName:(id)arg1;

@end

