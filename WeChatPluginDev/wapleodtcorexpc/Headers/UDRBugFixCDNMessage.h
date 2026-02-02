//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, UDRExtInfo;

@interface UDRBugFixCDNMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int diffAlgo; // @dynamic diffAlgo;
@property(retain, nonatomic) NSString *diffMd5; // @dynamic diffMd5;
@property(nonatomic) unsigned int diffSize; // @dynamic diffSize;
@property(retain, nonatomic) NSString *diffUrl; // @dynamic diffUrl;
@property(retain, nonatomic) UDRExtInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int localResourceVersion; // @dynamic localResourceVersion;
@property(retain, nonatomic) NSString *newResourceMd5; // @dynamic newResourceMd5;
@property(nonatomic) unsigned int newResourceSize; // @dynamic newResourceSize;
@property(retain, nonatomic) NSString *newResourceUrl; // @dynamic newResourceUrl;
@property(nonatomic) unsigned int newResourceVersion; // @dynamic newResourceVersion;
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(retain, nonatomic) NSString *resourceName; // @dynamic resourceName;

@end

