//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface SecureNotifyData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int checkSum; // @dynamic checkSum;
@property(nonatomic) unsigned int compressAlgo; // @dynamic compressAlgo;
@property(nonatomic) unsigned int compressLen; // @dynamic compressLen;
@property(nonatomic) unsigned int compressVer; // @dynamic compressVer;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int encryptAlgo; // @dynamic encryptAlgo;
@property(nonatomic) unsigned int encryptSalt; // @dynamic encryptSalt;
@property(nonatomic) unsigned int encryptVer; // @dynamic encryptVer;

@end

