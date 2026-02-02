//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BizAccountInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *banReason; // @dynamic banReason;
@property(nonatomic) unsigned int banType; // @dynamic banType;
@property(nonatomic) unsigned int serviceType; // @dynamic serviceType;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int userRole; // @dynamic userRole;

@end

