//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface ResourceMeta : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSMutableArray *eccmd5SignatureList; // @dynamic eccmd5SignatureList;
@property(nonatomic) unsigned int fileFlag; // @dynamic fileFlag;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *originalMd5; // @dynamic originalMd5;
@property(retain, nonatomic) NSString *originalSha1; // @dynamic originalSha1;
@property(nonatomic) unsigned int resVersion; // @dynamic resVersion;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

