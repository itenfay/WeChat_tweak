//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, HPRealNameInfo, NSMutableArray, NSString;

@interface CheckHoneyPayerResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *cardInfoList; // @dynamic cardInfoList;
@property(retain, nonatomic) NSString *hpcardTips; // @dynamic hpcardTips;
@property(retain, nonatomic) HPRealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

