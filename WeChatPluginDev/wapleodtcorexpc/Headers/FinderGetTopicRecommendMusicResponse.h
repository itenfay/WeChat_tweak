//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, MusicRelatedRecommendInfo;

@class WXPBGeneratedMessage;

@interface FinderGetTopicRecommendMusicResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MusicRelatedRecommendInfo *musicInfo; // @dynamic musicInfo;

@end

