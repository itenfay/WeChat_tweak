//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, StoryObject;

@class WXPBGeneratedMessage;

@interface StoryCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int commentId; // @dynamic commentId;
@property(retain, nonatomic) StoryObject *storyObject; // @dynamic storyObject;

@end

