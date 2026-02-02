//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface NewLifePostGuideResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *postGuideTopicTag; // @dynamic postGuideTopicTag;
@property(retain, nonatomic) NSString *postGuideTopicWording; // @dynamic postGuideTopicWording;
@property(nonatomic) unsigned int showInSeconds; // @dynamic showInSeconds;

@end

