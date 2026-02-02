//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAVoIPNotificationContentInfo : NSObject
{
    _Bool _isInvite;
    _Bool _isPrivate;
    _Bool _isVideo;
    _Bool _isFromAPNS;
    unsigned int _createTime;
    NSString *_roomID;
    NSString *_headImgUrl;
    NSString *_callerUserName;
    NSString *_msgID;
    NSString *_requestID;
    double _receiveTimestamp;
}

+ (id)notificationContentFromUserInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double receiveTimestamp; // @synthesize receiveTimestamp=_receiveTimestamp;
@property(nonatomic) _Bool isFromAPNS; // @synthesize isFromAPNS=_isFromAPNS;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSString *callerUserName; // @synthesize callerUserName=_callerUserName;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) _Bool isInvite; // @synthesize isInvite=_isInvite;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (id)initWithRoomID:(id)arg1 requestID:(id)arg2 isInvite:(_Bool)arg3 isPrivate:(_Bool)arg4 headImgUrl:(id)arg5 isVideo:(_Bool)arg6 callerUserName:(id)arg7 msgID:(id)arg8 createTime:(unsigned int)arg9 isFromAPNS:(_Bool)arg10 receiveTimestamp:(double)arg11;
- (id)userInfos;
- (unsigned long long)VoIPIntent_contentType;

@end

