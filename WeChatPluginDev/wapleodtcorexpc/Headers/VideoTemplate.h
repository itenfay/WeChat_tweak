//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString, VideoTemplate_AlbumTemplateInfo, VideoTemplate_CameraTemplateInfo, VideoTemplate_CommonTemplateInfo, VideoTemplate_DynamicInfo, VideoTemplate_EventTopicInfo, VideoTemplate_FinderUserInfo, VideoTemplate_VersionInfo;

@interface VideoTemplate : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aiModelType; // @dynamic aiModelType;
@property(retain, nonatomic) VideoTemplate_AlbumTemplateInfo *albumTplInfo; // @dynamic albumTplInfo;
@property(retain, nonatomic) VideoTemplate_CameraTemplateInfo *cameraTplInfo; // @dynamic cameraTplInfo;
@property(retain, nonatomic) VideoTemplate_CommonTemplateInfo *commonTplInfo; // @dynamic commonTplInfo;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) VideoTemplate_DynamicInfo *dynamicInfo; // @dynamic dynamicInfo;
@property(retain, nonatomic) VideoTemplate_EventTopicInfo *eventTopicInfo; // @dynamic eventTopicInfo;
@property(retain, nonatomic) VideoTemplate_FinderUserInfo *finderUserInfo; // @dynamic finderUserInfo;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *finderVideoTemplateInfo; // @dynamic finderVideoTemplateInfo;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;
@property(retain, nonatomic) VideoTemplate_VersionInfo *versionInfo; // @dynamic versionInfo;

@end

