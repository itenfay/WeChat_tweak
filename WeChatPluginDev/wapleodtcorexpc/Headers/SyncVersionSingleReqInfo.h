//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SyncVersionSingleReqInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int codePackageVersion; // @dynamic codePackageVersion;
@property(nonatomic) unsigned int localAppVersion; // @dynamic localAppVersion;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *wxaUserName; // @dynamic wxaUserName;

@end

