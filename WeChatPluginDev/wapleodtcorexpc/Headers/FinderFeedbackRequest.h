//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSMutableArray, NSString;

@interface FinderFeedbackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(nonatomic) unsigned int feedbackType; // @dynamic feedbackType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int liveScene; // @dynamic liveScene;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int satisfactionQuestSubType; // @dynamic satisfactionQuestSubType;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSMutableArray *subTypeList; // @dynamic subTypeList;

@end

