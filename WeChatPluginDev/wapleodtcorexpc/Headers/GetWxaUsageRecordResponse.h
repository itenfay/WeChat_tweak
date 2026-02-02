//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CommUseAppInfo, NSMutableArray, WxaAppBaseResponse;

@interface GetWxaUsageRecordResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CommUseAppInfo *commuseAppinfo; // @dynamic commuseAppinfo;
@property(retain, nonatomic) NSMutableArray *historyList; // @dynamic historyList;
@property(retain, nonatomic) NSMutableArray *starList; // @dynamic starList;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

