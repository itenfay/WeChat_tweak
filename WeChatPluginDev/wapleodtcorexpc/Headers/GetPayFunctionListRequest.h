//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetPayFunctionListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int lastFuncListExist; // @dynamic lastFuncListExist;
@property(retain, nonatomic) NSString *telephonyNetIso; // @dynamic telephonyNetIso;
@property(nonatomic) unsigned int ticketCount; // @dynamic ticketCount;
@property(retain, nonatomic) NSMutableArray *ticketList; // @dynamic ticketList;

@end

