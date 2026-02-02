//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface OpLogClientCheckGetAppList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appList; // @dynamic appList;
@property(retain, nonatomic) NSString *checkSum; // @dynamic checkSum;
@property(nonatomic) int isRoot; // @dynamic isRoot;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(nonatomic) unsigned int seq; // @dynamic seq;

@end

