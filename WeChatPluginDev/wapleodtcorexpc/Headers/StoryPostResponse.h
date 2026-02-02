//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, StoryObject;

@interface StoryPostResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int nextPostPeriod; // @dynamic nextPostPeriod;
@property(nonatomic) unsigned int postedCount; // @dynamic postedCount;
@property(retain, nonatomic) StoryObject *storyObject; // @dynamic storyObject;

@end

