//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WACampusVoipUserInfo;

@interface WACampusVoipMsg : NSObject
{
    _Bool _isFromApns;
    long long _type;
    long long _expireTime;
    long long _msgId;
    NSString *_roomId;
    long long _debugMode;
    NSString *_roomType;
    NSString *_signature;
    NSString *_appId;
    NSString *_pathBanner;
    NSString *_pathAnswer;
    WACampusVoipUserInfo *_userInfo;
    long long _receiveTime;
    long long _createTime;
    long long _styleType;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long styleType; // @synthesize styleType=_styleType;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long receiveTime; // @synthesize receiveTime=_receiveTime;
@property(nonatomic) _Bool isFromApns; // @synthesize isFromApns=_isFromApns;
@property(retain, nonatomic) WACampusVoipUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *pathAnswer; // @synthesize pathAnswer=_pathAnswer;
@property(retain, nonatomic) NSString *pathBanner; // @synthesize pathBanner=_pathBanner;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
@property(nonatomic) long long debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isVideoCall;
- (id)intentUserInfos;

@end

