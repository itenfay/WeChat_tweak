//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface HbStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *exclusiveUsername; // @dynamic exclusiveUsername;
@property(retain, nonatomic) NSString *hbId; // @dynamic hbId;
@property(nonatomic) unsigned long long recvAmt; // @dynamic recvAmt;
@property(nonatomic) unsigned int recvNum; // @dynamic recvNum;
@property(retain, nonatomic) NSMutableArray *recvRecords; // @dynamic recvRecords;
@property(nonatomic) unsigned long long totalAmt; // @dynamic totalAmt;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;

@end

