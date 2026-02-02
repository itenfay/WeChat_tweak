//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderMentionExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) unsigned int bypassBufferType; // @dynamic bypassBufferType;
@property(retain, nonatomic) NSString *entityId; // @dynamic entityId;
@property(retain, nonatomic) NSData *extBuff; // @dynamic extBuff;

@end

