//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray;

@interface FinderObjectHelpPromotionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long count; // @dynamic count;
@property(nonatomic) unsigned int hasPromoted; // @dynamic hasPromoted;
@property(retain, nonatomic) NSMutableArray *helpPromotionInfos; // @dynamic helpPromotionInfos;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;

@end

