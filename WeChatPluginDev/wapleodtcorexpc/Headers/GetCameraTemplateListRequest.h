//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface GetCameraTemplateListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(nonatomic) unsigned long long eventTopicId; // @dynamic eventTopicId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) _Bool forceTestEnv; // @dynamic forceTestEnv;
@property(retain, nonatomic) NSString *fromTplId; // @dynamic fromTplId;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *songId; // @dynamic songId;
@property(nonatomic) unsigned long long tabId; // @dynamic tabId;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(nonatomic) unsigned int wevisionSdkVersion; // @dynamic wevisionSdkVersion;

@end

