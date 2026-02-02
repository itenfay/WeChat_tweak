//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderUniLikeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) unsigned int bypassBufferType; // @dynamic bypassBufferType;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(retain, nonatomic) NSString *entityId; // @dynamic entityId;
@property(retain, nonatomic) FinderBaseRequest *finderBaserequest; // @dynamic finderBaserequest;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int interactionIdentity; // @dynamic interactionIdentity;
@property(nonatomic) unsigned long long likeSeq; // @dynamic likeSeq;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned int operationType; // @dynamic operationType;

@end

