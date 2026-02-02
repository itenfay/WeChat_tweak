//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface TouchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int biometricsVersion; // @dynamic biometricsVersion;
@property(nonatomic) int canUseTouch; // @dynamic canUseTouch;
@property(nonatomic) int needChangeAuthKey; // @dynamic needChangeAuthKey;
@property(nonatomic) int soterPayOpenType; // @dynamic soterPayOpenType;
@property(retain, nonatomic) NSData *touchChallenge; // @dynamic touchChallenge;

@end

