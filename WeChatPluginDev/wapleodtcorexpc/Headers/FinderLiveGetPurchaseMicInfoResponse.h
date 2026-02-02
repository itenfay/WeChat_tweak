//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AnchorGetPurchaseMicInfo, AudienceGetPurchaseMicInfo, BaseResponse;

@interface FinderLiveGetPurchaseMicInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) AnchorGetPurchaseMicInfo *purchaseMicInfoForAnchor; // @dynamic purchaseMicInfoForAnchor;
@property(retain, nonatomic) AudienceGetPurchaseMicInfo *purchaseMicInfoForAudience; // @dynamic purchaseMicInfoForAudience;

@end

