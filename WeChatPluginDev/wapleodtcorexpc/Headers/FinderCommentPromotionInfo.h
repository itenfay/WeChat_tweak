//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface FinderCommentPromotionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *dislikeReasonList; // @dynamic dislikeReasonList;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *promotionBuffer; // @dynamic promotionBuffer;
@property(retain, nonatomic) NSString *promotionLabelName; // @dynamic promotionLabelName;
@property(retain, nonatomic) FinderJumpInfo *promotionLabelPageJumpInfo; // @dynamic promotionLabelPageJumpInfo;

@end

