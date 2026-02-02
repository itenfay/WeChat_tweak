//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo_CardStyle;

@interface FinderJumpInfo_DynamicCardStyleV2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int changeTime; // @dynamic changeTime;
@property(nonatomic) unsigned int finishChange; // @dynamic finishChange;
@property(retain, nonatomic) FinderJumpInfo_CardStyle *firstCard; // @dynamic firstCard;
@property(retain, nonatomic) FinderJumpInfo_CardStyle *secondCard; // @dynamic secondCard;

@end

