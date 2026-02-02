//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HwClientEncryptFileInfo, NSString;

@interface MMIotHwImage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(nonatomic) unsigned int cdnType; // @dynamic cdnType;
@property(retain, nonatomic) HwClientEncryptFileInfo *clientEncryptFileInfo; // @dynamic clientEncryptFileInfo;
@property(retain, nonatomic) NSString *enckey; // @dynamic enckey;
@property(nonatomic) unsigned int fileEncryptMode; // @dynamic fileEncryptMode;
@property(retain, nonatomic) NSString *fileid; // @dynamic fileid;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int size; // @dynamic size;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

