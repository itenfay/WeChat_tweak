//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderEnterPersonalMsgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int myAccountType; // @dynamic myAccountType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) _Bool supportAlias; // @dynamic supportAlias;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

