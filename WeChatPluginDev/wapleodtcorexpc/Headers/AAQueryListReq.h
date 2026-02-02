//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface AAQueryListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *lastBillId; // @dynamic lastBillId;
@property(nonatomic) int lastBillType; // @dynamic lastBillType;
@property(nonatomic) unsigned int lastCreateTime; // @dynamic lastCreateTime;
@property(retain, nonatomic) NSString *lastTransId; // @dynamic lastTransId;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

