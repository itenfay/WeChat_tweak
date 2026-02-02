//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface FinderGetFeedHelpPromotionedListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *helpPromotionInfos; // @dynamic helpPromotionInfos;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;

@end

