//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveMilestoneLotteryStatusQuery : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *couponId; // @dynamic couponId;
@property(retain, nonatomic) NSString *milestoneLotteryId; // @dynamic milestoneLotteryId;
@property(nonatomic) unsigned int prizeType; // @dynamic prizeType;
@property(retain, nonatomic) NSString *relatedProductId; // @dynamic relatedProductId;

@end

