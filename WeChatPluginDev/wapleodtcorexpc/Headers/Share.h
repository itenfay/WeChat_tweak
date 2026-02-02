//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface Share : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *messageDetail; // @dynamic messageDetail;
@property(retain, nonatomic) NSString *messageTitle; // @dynamic messageTitle;
@property(retain, nonatomic) NSString *timelineDetail; // @dynamic timelineDetail;
@property(nonatomic) _Bool toMessage; // @dynamic toMessage;
@property(nonatomic) _Bool toTimeline; // @dynamic toTimeline;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

