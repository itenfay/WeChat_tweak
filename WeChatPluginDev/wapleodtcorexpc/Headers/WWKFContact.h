//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class COpenIMInfo, NSString;

@interface WWKFContact : NSObject
{
    _Bool _needLocation;
    unsigned int _source;
    unsigned int _lastUpdateTime;
    NSString *_userName;
    NSString *_nickName;
    NSString *_bigAvatarUrl;
    NSString *_smallAvatarUrl;
    NSString *_nickNameJianPin;
    NSString *_nickNameQuanPin;
    NSString *_appId;
    COpenIMInfo *_openIMInfo;
    NSString *_headImgStatus;
    NSString *_ticket;
    unsigned long long _settingFlag;
    NSString *_locationType;
}

+ (id)contactWithOpenIMKefuContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *locationType; // @synthesize locationType=_locationType;
@property(nonatomic) _Bool needLocation; // @synthesize needLocation=_needLocation;
@property(nonatomic) unsigned long long settingFlag; // @synthesize settingFlag=_settingFlag;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *headImgStatus; // @synthesize headImgStatus=_headImgStatus;
@property(retain, nonatomic) COpenIMInfo *openIMInfo; // @synthesize openIMInfo=_openIMInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *nickNameQuanPin; // @synthesize nickNameQuanPin=_nickNameQuanPin;
@property(retain, nonatomic) NSString *nickNameJianPin; // @synthesize nickNameJianPin=_nickNameJianPin;
@property(retain, nonatomic) NSString *smallAvatarUrl; // @synthesize smallAvatarUrl=_smallAvatarUrl;
@property(retain, nonatomic) NSString *bigAvatarUrl; // @synthesize bigAvatarUrl=_bigAvatarUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toCContact;
- (id)description;
- (id)init;

@end

