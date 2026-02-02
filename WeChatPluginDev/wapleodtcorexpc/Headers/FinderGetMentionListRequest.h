//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderGetMentionListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long aggregatedRootMentionId; // @dynamic aggregatedRootMentionId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int fetchMode; // @dynamic fetchMode;
@property(nonatomic) unsigned int fetchScene; // @dynamic fetchScene;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(nonatomic) unsigned int mentionType; // @dynamic mentionType;
@property(retain, nonatomic) NSData *pageBuffer; // @dynamic pageBuffer;
@property(nonatomic) unsigned int requestScene; // @dynamic requestScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

