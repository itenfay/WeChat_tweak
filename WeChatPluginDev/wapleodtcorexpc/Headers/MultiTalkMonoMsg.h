//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXLocalNotificationInfo;

@interface MultiTalkMonoMsg
{
    _Bool m_isCancelMsg;
    _Bool m_isNotFriendMsg;
    id _m_group;
    NSString *_m_fromUser;
    WXLocalNotificationInfo *_m_notificationInfo;
    unsigned long long _m_msgReceiveTime;
}

+ (id)getInviteUserFromGroup:(id)arg1;
+ (id)cancelMsg;
+ (id)notFriendInviteMsg;
+ (id)inviteMsg;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_msgReceiveTime; // @synthesize m_msgReceiveTime=_m_msgReceiveTime;
@property(retain, nonatomic) WXLocalNotificationInfo *m_notificationInfo; // @synthesize m_notificationInfo=_m_notificationInfo;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) id m_group; // @synthesize m_group=_m_group;
@property(nonatomic) _Bool m_isNotFriendMsg; // @synthesize m_isNotFriendMsg;
@property(nonatomic) _Bool m_isCancelMsg; // @synthesize m_isCancelMsg;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)localNotificationInfo;
- (id)voipNotificationContentInfoWithRequestID:(id)arg1;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)msgKey;
- (id)serviceType;
- (_Bool)isCancelMsg;
- (_Bool)isOutOfDate;
- (id)init;

@end

