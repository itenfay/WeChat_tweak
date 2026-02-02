//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface QryAutoPlanOrderListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long limit; // @dynamic limit;
@property(nonatomic) unsigned long long offset; // @dynamic offset;
@property(nonatomic) unsigned long long usrPlanId; // @dynamic usrPlanId;

@end

