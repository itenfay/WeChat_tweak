//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NewLifeStartCdnUploadReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appType; // @dynamic appType;
@property(nonatomic) unsigned int bizScene; // @dynamic bizScene;
@property(retain, nonatomic) NSString *customHeader; // @dynamic customHeader;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *fullPath; // @dynamic fullPath;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) NSString *thumbPath; // @dynamic thumbPath;

@end

