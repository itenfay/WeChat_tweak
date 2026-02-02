//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, InteractionCommResp;

@class WXPBGeneratedMessage;

@interface FinderLikeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) InteractionCommResp *interactionCommResp; // @dynamic interactionCommResp;
@property(nonatomic) unsigned long long likeid; // @dynamic likeid;

@end

