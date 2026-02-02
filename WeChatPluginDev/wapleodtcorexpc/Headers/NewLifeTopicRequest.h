//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, NewLifeTextInEdit;

@interface NewLifeTopicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *existTopics; // @dynamic existTopics;
@property(retain, nonatomic) NSMutableArray *imageTagList; // @dynamic imageTagList;
@property(retain, nonatomic) NewLifeTextInEdit *text; // @dynamic text;
@property(retain, nonatomic) NSString *topicText; // @dynamic topicText;

@end

