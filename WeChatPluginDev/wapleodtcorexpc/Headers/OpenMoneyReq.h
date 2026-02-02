//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface OpenMoneyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long materialId; // @dynamic materialId;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSString *traceId; // @dynamic traceId;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

