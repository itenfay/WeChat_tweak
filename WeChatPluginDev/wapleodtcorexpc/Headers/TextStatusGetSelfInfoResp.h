//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse;

@class WXPBGeneratedMessage;

@interface TextStatusGetSelfInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int likedCount; // @dynamic likedCount;
@property(nonatomic) int liveMemberCount; // @dynamic liveMemberCount;
@property(nonatomic) int referencedCount; // @dynamic referencedCount;

@end

