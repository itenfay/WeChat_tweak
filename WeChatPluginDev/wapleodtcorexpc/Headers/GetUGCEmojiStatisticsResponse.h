//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, UGCEmojiStatisticsInfo;

@class WXPBGeneratedMessage;

@interface GetUGCEmojiStatisticsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) UGCEmojiStatisticsInfo *ugcemojiStatisticsInfo; // @dynamic ugcemojiStatisticsInfo;

@end

