//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, UDRExtInfo, UDRMatchRule;

@interface UDRRuleMatchCDNMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *diffList; // @dynamic diffList;
@property(retain, nonatomic) UDRExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) UDRMatchRule *matchRule; // @dynamic matchRule;
@property(retain, nonatomic) NSString *newResourceMd5; // @dynamic newResourceMd5;
@property(nonatomic) unsigned int newResourceSize; // @dynamic newResourceSize;
@property(retain, nonatomic) NSString *newResourceUrl; // @dynamic newResourceUrl;
@property(nonatomic) unsigned int newResourceVersion; // @dynamic newResourceVersion;
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(retain, nonatomic) NSString *resourceName; // @dynamic resourceName;

@end

