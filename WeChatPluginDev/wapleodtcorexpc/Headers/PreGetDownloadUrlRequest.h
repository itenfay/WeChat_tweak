//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PreGetDownloadUrlRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool isSupportWithoutLib; // @dynamic isSupportWithoutLib;
@property(nonatomic) unsigned int oldAppVersion; // @dynamic oldAppVersion;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int supportedEncryptVersion; // @dynamic supportedEncryptVersion;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

