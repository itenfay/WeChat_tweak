//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLivePrepareIncomeEncashRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizAcctId; // @dynamic bizAcctId;
@property(nonatomic) unsigned int bizType; // @dynamic bizType;
@property(nonatomic) unsigned int encashScene; // @dynamic encashScene;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *reportSessionId; // @dynamic reportSessionId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;

@end

