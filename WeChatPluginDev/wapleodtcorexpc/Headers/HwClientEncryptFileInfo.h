//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface HwClientEncryptFileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int encryptAlgo; // @dynamic encryptAlgo;
@property(retain, nonatomic) NSString *ivBase64; // @dynamic ivBase64;
@property(retain, nonatomic) NSString *keyBase64; // @dynamic keyBase64;
@property(retain, nonatomic) NSString *tagBase64; // @dynamic tagBase64;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

