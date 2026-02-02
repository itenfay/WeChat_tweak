//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCNotificationArrivalReportResultInfo : NSObject
{
    _Bool _isFailed;
    unsigned long long _channel;
    NSString *_url;
    NSString *_messageID;
    unsigned long long _contentType;
    long long _statusCode;
    long long _errorCode;
    NSString *_errorDescription;
    unsigned long long _voIPContentType;
    NSString *_voIPContentRoomID;
    NSString *_voIPContentRoomKey;
}

+ (id)resultInfoWithChannel:(unsigned long long)arg1 notificationUserInfo:(id)arg2 cbURLResponse:(id)arg3 cbURLSessionError:(id)arg4;
+ (id)resultInfoWithUserInfos:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *voIPContentRoomKey; // @synthesize voIPContentRoomKey=_voIPContentRoomKey;
@property(retain, nonatomic) NSString *voIPContentRoomID; // @synthesize voIPContentRoomID=_voIPContentRoomID;
@property(nonatomic) unsigned long long voIPContentType; // @synthesize voIPContentType=_voIPContentType;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
- (id)description;
- (id)userInfos;
- (id)initWithChannel:(unsigned long long)arg1 url:(id)arg2 messageID:(id)arg3 contentType:(unsigned long long)arg4 isFailed:(_Bool)arg5 statusCode:(long long)arg6 errorCode:(long long)arg7 errorDescription:(id)arg8 voIPContentType:(unsigned long long)arg9 voIPContentRoomID:(id)arg10 voIPContentRoomKey:(id)arg11;
- (void)collect;

@end

