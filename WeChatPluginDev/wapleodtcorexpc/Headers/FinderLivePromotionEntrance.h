//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, LiveWeappJumpInfo, NSString, PromptBubbleInfo;

@interface FinderLivePromotionEntrance : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PromptBubbleInfo *anchorDiscountPromptBubbleInfo; // @dynamic anchorDiscountPromptBubbleInfo;
@property(retain, nonatomic) NSString *anchorDiscountWording; // @dynamic anchorDiscountWording;
@property(retain, nonatomic) FinderJumpInfo *promotionLiteappInfo; // @dynamic promotionLiteappInfo;
@property(retain, nonatomic) LiveWeappJumpInfo *promotionMiniappInfo; // @dynamic promotionMiniappInfo;

@end

