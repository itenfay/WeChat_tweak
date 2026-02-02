//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface KVLogHead : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *languageVer; // @dynamic languageVer;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned int sendTime; // @dynamic sendTime;

@end

