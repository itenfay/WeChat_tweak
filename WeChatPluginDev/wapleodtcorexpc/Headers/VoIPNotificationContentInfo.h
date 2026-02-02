//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoIPNotificationContentInfo : NSObject
{
    _Bool _isInvite;
    _Bool _isMultiply;
    _Bool _isPrivate;
    _Bool _isVideo;
    _Bool _isFromAPNS;
    _Bool _isIlink;
    unsigned int _createTime;
    NSString *_roomID;
    NSString *_roomKey;
    NSString *_headImgBase64Url;
    NSString *_callerUserName;
    NSString *_inviteID;
    NSString *_msgID;
    NSString *_requestID;
    double _receiveTimestamp;
    NSString *_ilinkctx;
    long long _ilinkctxver;
}

+ (id)notificationContentFromAPNSPushRequest:(id)arg1 decryptPayload:(id)arg2;
+ (id)notificationContentFromUserInfo:(id)arg1;
+ (id)notificationContentInfoFromAppExtensionDataUtil;
- (void).cxx_destruct;
@property(nonatomic) long long ilinkctxver; // @synthesize ilinkctxver=_ilinkctxver;
@property(retain, nonatomic) NSString *ilinkctx; // @synthesize ilinkctx=_ilinkctx;
@property(nonatomic) _Bool isIlink; // @synthesize isIlink=_isIlink;
@property(nonatomic) double receiveTimestamp; // @synthesize receiveTimestamp=_receiveTimestamp;
@property(nonatomic) _Bool isFromAPNS; // @synthesize isFromAPNS=_isFromAPNS;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSString *inviteID; // @synthesize inviteID=_inviteID;
@property(retain, nonatomic) NSString *callerUserName; // @synthesize callerUserName=_callerUserName;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSString *headImgBase64Url; // @synthesize headImgBase64Url=_headImgBase64Url;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) _Bool isMultiply; // @synthesize isMultiply=_isMultiply;
@property(nonatomic) _Bool isInvite; // @synthesize isInvite=_isInvite;
@property(retain, nonatomic) NSString *roomKey; // @synthesize roomKey=_roomKey;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (id)description;
- (id)userInfosWithAPNSPushRequest:(id)arg1;
- (id)userInfos;
- (id)initWithRoomID:(id)arg1 roomKey:(id)arg2 isInvite:(_Bool)arg3 isMultiply:(_Bool)arg4 isPrivate:(_Bool)arg5 headImgBase64Url:(id)arg6 isVideo:(_Bool)arg7 callerUserName:(id)arg8 inviteID:(id)arg9 msgID:(id)arg10 createTime:(unsigned int)arg11 requestID:(id)arg12 isFromAPNS:(_Bool)arg13 receiveTimestamp:(double)arg14 isIlink:(_Bool)arg15 ilinkctx:(id)arg16 ilinkctxver:(long long)arg17;
- (unsigned long long)VoIPIntent_contentType;
- (id)monoMsg;
- (id)voIPMtInviteMsg;
- (unsigned long long)WCNotificationArrivalReport_voIPContentType;

@end

