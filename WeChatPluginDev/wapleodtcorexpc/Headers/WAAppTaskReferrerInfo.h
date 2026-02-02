//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAContact;

@interface WAAppTaskReferrerInfo : NSObject
{
    unsigned int _referrerType;
    unsigned int _refererAppServiceType;
    unsigned int _originScene;
    unsigned int _hostVersion;
    unsigned int _pluginSessionID;
    NSString *_referrerAppID;
    NSString *_agentId;
    id _referrerData;
    id _privateReferrerData;
    NSString *_messageExtraData;
    unsigned long long _operateScene;
    NSString *_referAction;
    NSString *_refererSessionID;
    WAContact *_hostContact;
    NSString *_hostUserName;
    NSString *_gameliveInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *gameliveInfo; // @synthesize gameliveInfo=_gameliveInfo;
@property(nonatomic) unsigned int pluginSessionID; // @synthesize pluginSessionID=_pluginSessionID;
@property(nonatomic) unsigned int hostVersion; // @synthesize hostVersion=_hostVersion;
@property(retain, nonatomic) NSString *hostUserName; // @synthesize hostUserName=_hostUserName;
@property(retain, nonatomic) WAContact *hostContact; // @synthesize hostContact=_hostContact;
@property(nonatomic) unsigned int originScene; // @synthesize originScene=_originScene;
@property(nonatomic) unsigned int refererAppServiceType; // @synthesize refererAppServiceType=_refererAppServiceType;
@property(retain, nonatomic) NSString *refererSessionID; // @synthesize refererSessionID=_refererSessionID;
@property(retain, nonatomic) NSString *referAction; // @synthesize referAction=_referAction;
@property(nonatomic) unsigned long long operateScene; // @synthesize operateScene=_operateScene;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(retain, nonatomic) id privateReferrerData; // @synthesize privateReferrerData=_privateReferrerData;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;
@property(retain, nonatomic) NSString *agentId; // @synthesize agentId=_agentId;
@property(nonatomic) unsigned int referrerType; // @synthesize referrerType=_referrerType;
@property(retain, nonatomic) NSString *referrerAppID; // @synthesize referrerAppID=_referrerAppID;
- (id)description;

@end

