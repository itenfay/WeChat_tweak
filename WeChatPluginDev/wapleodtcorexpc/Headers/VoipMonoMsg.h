//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXLocalNotificationInfo;

@interface VoipMonoMsg
{
    _Bool _m_fromAnswered;
    _Bool _hasHolded;
    _Bool _isFromIlink;
    unsigned int _m_receiveTime;
    unsigned int _m_msgType;
    unsigned int _m_mode;
    unsigned int _m_fromScene;
    unsigned long long _m_roomId;
    long long _m_roomKey;
    NSString *_m_fromUser;
    long long _m_n64MesSvrID;
    long long _msgID;
    NSString *_notificationRequestID;
    unsigned long long _recvTime;
    WXLocalNotificationInfo *_m_notificationInfo;
}

+ (id)msgKeyWithRoomID:(unsigned long long)arg1;
+ (id)defaultServiceType;
- (void).cxx_destruct;
@property(retain, nonatomic) WXLocalNotificationInfo *m_notificationInfo; // @synthesize m_notificationInfo=_m_notificationInfo;
@property(nonatomic) unsigned long long recvTime; // @synthesize recvTime=_recvTime;
@property(nonatomic) _Bool isFromIlink; // @synthesize isFromIlink=_isFromIlink;
@property(retain, nonatomic) NSString *notificationRequestID; // @synthesize notificationRequestID=_notificationRequestID;
@property(nonatomic) long long msgID; // @synthesize msgID=_msgID;
@property(nonatomic) long long m_n64MesSvrID; // @synthesize m_n64MesSvrID=_m_n64MesSvrID;
@property(nonatomic) _Bool hasHolded; // @synthesize hasHolded=_hasHolded;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(nonatomic) unsigned int m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(nonatomic) _Bool m_fromAnswered; // @synthesize m_fromAnswered=_m_fromAnswered;
@property(nonatomic) long long m_roomKey; // @synthesize m_roomKey=_m_roomKey;
@property(nonatomic) unsigned long long m_roomId; // @synthesize m_roomId=_m_roomId;
@property(nonatomic) unsigned int m_mode; // @synthesize m_mode=_m_mode;
@property(nonatomic) unsigned int m_msgType; // @synthesize m_msgType=_m_msgType;
@property(nonatomic) unsigned int m_receiveTime; // @synthesize m_receiveTime=_m_receiveTime;
@property(readonly, nonatomic) _Bool isInvite;
@property(readonly, nonatomic) _Bool isVideo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)localNotificationInfo;
- (id)voipNotificationContentInfo;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)msgKey;
- (id)serviceType;
- (_Bool)isCancelMsg;
- (_Bool)receiveTimeOutOfDate;
- (_Bool)isOutOfDate;
- (id)init;

@end

