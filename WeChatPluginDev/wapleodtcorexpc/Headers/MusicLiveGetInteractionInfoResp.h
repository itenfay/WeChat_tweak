//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse;

@interface MusicLiveGetInteractionInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) _Bool hasLiked; // @dynamic hasLiked;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;

@end

