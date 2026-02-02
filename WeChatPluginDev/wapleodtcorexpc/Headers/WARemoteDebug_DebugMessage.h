//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface WARemoteDebug_DebugMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)DecompressData:(id)arg1 decompressSize:(unsigned int)arg2;
+ (id)CompressData:(id)arg1;
- (id)decompressDataWithSupportCompressAlgo:(unsigned int)arg1;
- (void)compressData:(id)arg1 supportCompressAlgo:(unsigned int)arg2;

// Remaining properties
@property(nonatomic) unsigned int after; // @dynamic after;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) unsigned int compressAlgo; // @dynamic compressAlgo;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int originalSize; // @dynamic originalSize;
@property(nonatomic) unsigned int seq; // @dynamic seq;

@end

