//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderUniGetCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(nonatomic) unsigned int direction; // @dynamic direction;
@property(retain, nonatomic) NSString *entityId; // @dynamic entityId;
@property(retain, nonatomic) NSString *feedOwnerUsername; // @dynamic feedOwnerUsername;
@property(retain, nonatomic) FinderBaseRequest *finderBaserequest; // @dynamic finderBaserequest;
@property(nonatomic) unsigned int interactionIdentity; // @dynamic interactionIdentity;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long maxCommentId; // @dynamic maxCommentId;
@property(nonatomic) unsigned int pullScene; // @dynamic pullScene;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;

@end

