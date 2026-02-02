//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HeavyUserReqInfo, NSData;

@interface GetCliKVStrategyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int generalVersion; // @dynamic generalVersion;
@property(retain, nonatomic) HeavyUserReqInfo *heavyUserInfo; // @dynamic heavyUserInfo;
@property(nonatomic) unsigned int kvgeneralVersion; // @dynamic kvgeneralVersion;
@property(nonatomic) unsigned int kvspecialVersion; // @dynamic kvspecialVersion;
@property(nonatomic) unsigned int kvwhiteOrBlackUinVersion; // @dynamic kvwhiteOrBlackUinVersion;
@property(retain, nonatomic) NSData *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int specialVersion; // @dynamic specialVersion;
@property(nonatomic) unsigned int whiteOrBlackUinVersion; // @dynamic whiteOrBlackUinVersion;

@end

