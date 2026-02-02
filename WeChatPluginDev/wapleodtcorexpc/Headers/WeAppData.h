//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface WeAppData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSData *dataBuffer; // @dynamic dataBuffer;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

