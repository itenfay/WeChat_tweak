//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BioPayV2AuthenRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int biometryType; // @dynamic biometryType;
@property(retain, nonatomic) NSString *json; // @dynamic json;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

