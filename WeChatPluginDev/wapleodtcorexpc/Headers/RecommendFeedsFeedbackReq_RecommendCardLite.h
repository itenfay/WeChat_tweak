//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface RecommendFeedsFeedbackReq_RecommendCardLite : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSMutableArray *exposedNegativeFeedbackReason; // @dynamic exposedNegativeFeedbackReason;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSMutableArray *negativeFeedbackReason; // @dynamic negativeFeedbackReason;

@end

