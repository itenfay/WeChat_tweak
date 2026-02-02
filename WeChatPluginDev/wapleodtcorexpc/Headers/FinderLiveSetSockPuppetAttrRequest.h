//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveSetSockPuppetAttrRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned long long showTs; // @dynamic showTs;

@end

