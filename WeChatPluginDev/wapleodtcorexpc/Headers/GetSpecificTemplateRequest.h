//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface GetSpecificTemplateRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(retain, nonatomic) NSString *shortUrl; // @dynamic shortUrl;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

