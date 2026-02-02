//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ConfigInfo, NSString;

@interface JoinRoomInfo : NSObject
{
    _Bool _forceCellularNetwork;
    int _audioType;
    int _timeStamp;
    int _roomType;
    int _maxWidth;
    int _maxHeight;
    int _videoRatio;
    int _videoRotation;
    int _maxDecodeFPS;
    int _fixedVideoResolution;
    unsigned int _lifespan;
    NSString *_appId;
    NSString *_busiAppId;
    NSString *_signature;
    NSString *_nonceStr;
    NSString *_groupId;
    ConfigInfo *_configInfo;
    NSString *_privateData;
    NSString *_sessionKey;
    long long _roomId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceCellularNetwork; // @synthesize forceCellularNetwork=_forceCellularNetwork;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned int lifespan; // @synthesize lifespan=_lifespan;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) NSString *privateData; // @synthesize privateData=_privateData;
@property(retain, nonatomic) ConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
@property(nonatomic) int fixedVideoResolution; // @synthesize fixedVideoResolution=_fixedVideoResolution;
@property(nonatomic) int maxDecodeFPS; // @synthesize maxDecodeFPS=_maxDecodeFPS;
@property(nonatomic) int videoRotation; // @synthesize videoRotation=_videoRotation;
@property(nonatomic) int videoRatio; // @synthesize videoRatio=_videoRatio;
@property(nonatomic) int maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) int maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) int roomType; // @synthesize roomType=_roomType;
@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *busiAppId; // @synthesize busiAppId=_busiAppId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
- (id)init;

@end

