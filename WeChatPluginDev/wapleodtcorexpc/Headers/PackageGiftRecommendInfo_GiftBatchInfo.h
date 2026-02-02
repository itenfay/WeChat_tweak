//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PackageGiftRecommendInfo_GiftBatchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *batchId; // @dynamic batchId;
@property(retain, nonatomic) NSString *durationId; // @dynamic durationId;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned long long leftCount; // @dynamic leftCount;

@end

