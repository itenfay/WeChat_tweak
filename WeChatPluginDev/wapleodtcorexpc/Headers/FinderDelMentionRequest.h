//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderDelMentionRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned long long mentionId; // @dynamic mentionId;
@property(retain, nonatomic) NSData *mentionLastBuff; // @dynamic mentionLastBuff;
@property(nonatomic) unsigned int mentionType; // @dynamic mentionType;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(nonatomic) unsigned long long svrMentionId; // @dynamic svrMentionId;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

