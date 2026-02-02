//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg, NSMutableArray, NSString;

@interface GetRecommendFeedsResp_RecommendCardMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aggregationTitle; // @dynamic aggregationTitle;
@property(retain, nonatomic) NSString *aggregationUrl; // @dynamic aggregationUrl;
@property(retain, nonatomic) NSString *canvasBuffer; // @dynamic canvasBuffer;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSMutableArray *friendSeenHeadImgUrl; // @dynamic friendSeenHeadImgUrl;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(nonatomic) _Bool isSupply; // @dynamic isSupply;
@property(retain, nonatomic) NSMutableArray *negativeFeedbackReason; // @dynamic negativeFeedbackReason;
@property(retain, nonatomic) NSString *negativeFeedbackTitle; // @dynamic negativeFeedbackTitle;
@property(retain, nonatomic) NSMutableArray *recommendItem; // @dynamic recommendItem;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg *recommendTag; // @dynamic recommendTag;
@property(retain, nonatomic) NSString *recommendWording; // @dynamic recommendWording;
@property(nonatomic) unsigned int separateStyle; // @dynamic separateStyle;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(nonatomic) unsigned int styleFlag; // @dynamic styleFlag;

@end

