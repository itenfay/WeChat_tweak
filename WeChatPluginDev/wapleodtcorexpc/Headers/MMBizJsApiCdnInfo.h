//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMBizJsApiCdnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) NSString *cdnUrl; // @dynamic cdnUrl;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

