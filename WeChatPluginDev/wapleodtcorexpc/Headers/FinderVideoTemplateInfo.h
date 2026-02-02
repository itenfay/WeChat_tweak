//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderVideoTemplateInfo_MusicInfo, FinderVideoTemplateInfo_SecurityAuditInfo, FinderVideoTemplateInfo_TraitsInfo, FinderVideoTemplateInfo_VersionInfo, NSString;

@interface FinderVideoTemplateInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)cutSameInfoWithTemplateId:(id)arg1 musicId:(id)arg2 type:(unsigned int)arg3;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (_Bool)canShowTemplateEntry;
- (_Bool)isClientCameraPositionNotSet;
- (_Bool)isOriginalSoundSwitchNotSet;
- (_Bool)isCameraPositionNotSet;

// Remaining properties
@property(retain, nonatomic) FinderVideoTemplateInfo_SecurityAuditInfo *auditInfo; // @dynamic auditInfo;
@property(nonatomic) unsigned int cameraPosition; // @dynamic cameraPosition;
@property(nonatomic) unsigned int clientCameraPosition; // @dynamic clientCameraPosition;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int entranceSource; // @dynamic entranceSource;
@property(retain, nonatomic) NSString *eventCreatorNickname; // @dynamic eventCreatorNickname;
@property(retain, nonatomic) NSString *eventName; // @dynamic eventName;
@property(nonatomic) unsigned int followObjectCheckBox; // @dynamic followObjectCheckBox;
@property(retain, nonatomic) NSString *followObjectId; // @dynamic followObjectId;
@property(retain, nonatomic) NSString *fromAppTempId; // @dynamic fromAppTempId;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(retain, nonatomic) NSString *musicId; // @dynamic musicId;
@property(retain, nonatomic) FinderVideoTemplateInfo_MusicInfo *musicInfo; // @dynamic musicInfo;
@property(nonatomic) unsigned int originalSoundSwitch; // @dynamic originalSoundSwitch;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long tmplTopicId; // @dynamic tmplTopicId;
@property(retain, nonatomic) FinderVideoTemplateInfo_TraitsInfo *traitsInfo; // @dynamic traitsInfo;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned int usageCount; // @dynamic usageCount;
@property(retain, nonatomic) FinderVideoTemplateInfo_VersionInfo *versionInfo; // @dynamic versionInfo;
@property(nonatomic) unsigned int videoSource; // @dynamic videoSource;

@end

