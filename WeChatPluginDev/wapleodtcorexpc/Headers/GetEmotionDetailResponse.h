//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, EmotionDetail, NSMutableArray;

@class WXPBGeneratedMessage;

@interface GetEmotionDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *emojiInfo; // @dynamic emojiInfo;
@property(retain, nonatomic) EmotionDetail *emotionDetail; // @dynamic emotionDetail;

@end

