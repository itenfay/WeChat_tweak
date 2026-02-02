//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NewLifeCdnUploadTaskCallback : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(nonatomic) unsigned int callbackType; // @dynamic callbackType;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *fileId; // @dynamic fileId;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic) unsigned long long offset; // @dynamic offset;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(nonatomic) unsigned long long total; // @dynamic total;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

