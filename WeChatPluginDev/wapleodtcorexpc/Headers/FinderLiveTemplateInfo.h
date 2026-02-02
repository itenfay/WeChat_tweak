//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLiveTemplateInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *infoBuffer; // @dynamic infoBuffer;
@property(nonatomic) unsigned int infoType; // @dynamic infoType;
@property(nonatomic) unsigned int seq; // @dynamic seq;
@property(nonatomic) unsigned long long serverTimestamp; // @dynamic serverTimestamp;
@property(retain, nonatomic) NSString *versionWording; // @dynamic versionWording;

@end

