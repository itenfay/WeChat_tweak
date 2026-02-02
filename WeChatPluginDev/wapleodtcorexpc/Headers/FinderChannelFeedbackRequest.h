//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderChannelFeedbackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *channelIdStr; // @dynamic channelIdStr;
@property(retain, nonatomic) NSString *channelName; // @dynamic channelName;
@property(nonatomic) unsigned int channelStyle; // @dynamic channelStyle;
@property(nonatomic) unsigned int channelType; // @dynamic channelType;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned int feedbackType; // @dynamic feedbackType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;

@end

