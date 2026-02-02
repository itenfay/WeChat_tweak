//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderGetCommentListCtx, NSData, NSString;

@interface FinderGetCommentListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderGetCommentListCtx *ctx; // @dynamic ctx;
@property(nonatomic) unsigned int direction; // @dynamic direction;
@property(retain, nonatomic) NSString *enterSessionId; // @dynamic enterSessionId;
@property(retain, nonatomic) NSString *exportObjectId; // @dynamic exportObjectId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int identityScene; // @dynamic identityScene;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int pcDeviceType; // @dynamic pcDeviceType;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(nonatomic) unsigned int requestScene; // @dynamic requestScene;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;

@end

