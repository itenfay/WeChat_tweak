//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, EmotionActivity, EmotionLink;

@class WXPBGeneratedMessage;

@interface GetEmotionActivityResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EmotionActivity *activity; // @dynamic activity;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) EmotionLink *link; // @dynamic link;

@end

