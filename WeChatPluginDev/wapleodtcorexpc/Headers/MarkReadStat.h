//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MarkReadStat : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(nonatomic) unsigned long long areaId; // @dynamic areaId;
@property(nonatomic) unsigned int autoPlayTimeMs; // @dynamic autoPlayTimeMs;
@property(nonatomic) _Bool autoPlayWithSound; // @dynamic autoPlayWithSound;
@property(nonatomic) unsigned int commScene; // @dynamic commScene;
@property(nonatomic) unsigned int effectiveExposeTimeMs; // @dynamic effectiveExposeTimeMs;
@property(nonatomic) unsigned int exposeAreaRatio; // @dynamic exposeAreaRatio;
@property(nonatomic) unsigned int exposeTimeMs; // @dynamic exposeTimeMs;
@property(nonatomic) unsigned int feedIndex; // @dynamic feedIndex;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned long long startEffectiveExposeTimeMs; // @dynamic startEffectiveExposeTimeMs;
@property(nonatomic) unsigned long long startExposeTimeMs; // @dynamic startExposeTimeMs;
@property(nonatomic) unsigned int subScene; // @dynamic subScene;

@end

