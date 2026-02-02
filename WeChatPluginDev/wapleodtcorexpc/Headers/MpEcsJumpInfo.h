//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EcsJumpInfo, NSString;

@interface MpEcsJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *encryptProductKey; // @dynamic encryptProductKey;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) EcsJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(retain, nonatomic) NSString *shopAppid; // @dynamic shopAppid;

@end

