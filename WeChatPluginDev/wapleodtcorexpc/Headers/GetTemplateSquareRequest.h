//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface GetTemplateSquareRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryKey; // @dynamic categoryKey;
@property(nonatomic) unsigned long long eventTopicId; // @dynamic eventTopicId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int miaojianSdkVersion; // @dynamic miaojianSdkVersion;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(retain, nonatomic) NSString *priorityTplId; // @dynamic priorityTplId;
@property(retain, nonatomic) NSString *recMusicId; // @dynamic recMusicId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int wevisionSdkVersion; // @dynamic wevisionSdkVersion;

@end

