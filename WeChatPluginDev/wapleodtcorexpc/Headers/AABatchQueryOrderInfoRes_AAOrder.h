//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface AABatchQueryOrderInfoRes_AAOrder : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *launcherUsername; // @dynamic launcherUsername;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(nonatomic) unsigned int state; // @dynamic state;

@end

