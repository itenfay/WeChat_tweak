//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ULSRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int certVer; // @dynamic certVer;
@property(nonatomic) unsigned int cliVer; // @dynamic cliVer;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) NSData *encryptBuff; // @dynamic encryptBuff;
@property(nonatomic) unsigned int unused1; // @dynamic unused1;
@property(nonatomic) unsigned int unused2; // @dynamic unused2;

@end

