//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface CliReportKVDataPackage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientVersion; // @dynamic clientVersion;
@property(nonatomic) unsigned int datatype; // @dynamic datatype;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(retain, nonatomic) NSString *languageVer; // @dynamic languageVer;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned int uin; // @dynamic uin;

@end

