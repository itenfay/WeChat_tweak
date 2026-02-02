//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface XMCreateUploadUrlReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *sha; // @dynamic sha;
@property(nonatomic) unsigned int size; // @dynamic size;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

