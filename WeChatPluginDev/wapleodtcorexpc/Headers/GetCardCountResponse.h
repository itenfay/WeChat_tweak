//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse;

@class WXPBGeneratedMessage;

@interface GetCardCountResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) unsigned int hasCardItem; // @dynamic hasCardItem;
@property(nonatomic) unsigned int hasShareCard; // @dynamic hasShareCard;

@end

