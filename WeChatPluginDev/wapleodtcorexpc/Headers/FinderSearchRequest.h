//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderSearchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *h5ByPass; // @dynamic h5ByPass;
@property(retain, nonatomic) NSData *hotwordSessionBuffer; // @dynamic hotwordSessionBuffer;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @dynamic objHotwordInfoBuff;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *topicBuffer; // @dynamic topicBuffer;
@property(retain, nonatomic) NSData *ugcCollectionVideoBuff; // @dynamic ugcCollectionVideoBuff;

@end

