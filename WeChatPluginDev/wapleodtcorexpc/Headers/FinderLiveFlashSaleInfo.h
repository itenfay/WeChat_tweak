//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveFlashSaleProductInfo, NSData;

@interface FinderLiveFlashSaleInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, nonatomic) FinderLiveFlashSaleProductInfo *productInfo;

// Remaining properties
@property(nonatomic) unsigned int cancel; // @dynamic cancel;
@property(retain, nonatomic) NSData *customBuff; // @dynamic customBuff;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;

@end

