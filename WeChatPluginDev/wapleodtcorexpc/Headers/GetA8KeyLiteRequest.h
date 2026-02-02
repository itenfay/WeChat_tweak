//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetA8KeyLiteRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int batchCount; // @dynamic batchCount;
@property(nonatomic) unsigned int fontScale; // @dynamic fontScale;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(retain, nonatomic) NSString *outerUrl; // @dynamic outerUrl;
@property(retain, nonatomic) NSMutableArray *prefetchDomainInfos; // @dynamic prefetchDomainInfos;
@property(nonatomic) unsigned int reason; // @dynamic reason;
@property(retain, nonatomic) NSMutableArray *reqInfo; // @dynamic reqInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int subScene; // @dynamic subScene;

@end

