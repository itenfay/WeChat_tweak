//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderContactMsgInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *msgUsername; // @dynamic msgUsername;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;

@end

