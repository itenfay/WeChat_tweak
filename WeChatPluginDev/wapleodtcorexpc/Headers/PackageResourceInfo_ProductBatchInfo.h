//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PackageResourceInfo_ProductBatchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *batchId; // @dynamic batchId;
@property(retain, nonatomic) NSString *durationId; // @dynamic durationId;
@property(retain, nonatomic) NSString *freeGiftId; // @dynamic freeGiftId;
@property(nonatomic) _Bool isBlockGive; // @dynamic isBlockGive;
@property(nonatomic) unsigned long long leftCount; // @dynamic leftCount;
@property(nonatomic) unsigned long long newExpireTime; // @dynamic newExpireTime;

@end

