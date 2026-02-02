//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinBuffer_t;

@interface RemindFriendsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adgroupId; // @dynamic adgroupId;
@property(nonatomic) unsigned long long adgroupId64; // @dynamic adgroupId64;
@property(retain, nonatomic) SKBuiltinBuffer_t *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *paidInfo; // @dynamic paidInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *selfInfo; // @dynamic selfInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *sourceInfo; // @dynamic sourceInfo;

@end

