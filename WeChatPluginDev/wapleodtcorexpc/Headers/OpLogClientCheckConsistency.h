//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface OpLogClientCheckConsistency : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *checkBufferHash; // @dynamic checkBufferHash;
@property(nonatomic) unsigned int checkBufferSize; // @dynamic checkBufferSize;
@property(retain, nonatomic) NSString *checkSum; // @dynamic checkSum;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(nonatomic) unsigned int fileOffset; // @dynamic fileOffset;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int isRoot; // @dynamic isRoot;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *osversion; // @dynamic osversion;
@property(nonatomic) unsigned int seq; // @dynamic seq;

@end

