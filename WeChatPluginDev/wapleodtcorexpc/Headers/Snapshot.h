//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Address, Express, NSMutableArray, NSString;

@interface Snapshot : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Address *address; // @dynamic address;
@property(retain, nonatomic) Express *express; // @dynamic express;
@property(retain, nonatomic) NSString *lockId; // @dynamic lockId;
@property(nonatomic) unsigned int productCount; // @dynamic productCount;
@property(retain, nonatomic) NSMutableArray *productions; // @dynamic productions;
@property(retain, nonatomic) NSMutableArray *receipt; // @dynamic receipt;
@property(nonatomic) unsigned int receiptCount; // @dynamic receiptCount;

@end

