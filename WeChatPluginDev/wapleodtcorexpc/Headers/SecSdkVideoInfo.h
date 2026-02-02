//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SecSdkVideoInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *externalFilename; // @dynamic externalFilename;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int videoPlayLength; // @dynamic videoPlayLength;
@property(nonatomic) unsigned int videoSize; // @dynamic videoSize;
@property(nonatomic) unsigned int watermarkFlag; // @dynamic watermarkFlag;

@end

