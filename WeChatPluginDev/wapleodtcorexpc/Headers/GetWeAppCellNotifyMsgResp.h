//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, WeAppNotifyMsg;

@class WXPBGeneratedMessage;

@interface GetWeAppCellNotifyMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WeAppNotifyMsg *msgInfo; // @dynamic msgInfo;
@property(nonatomic) unsigned int updateIntervalTime; // @dynamic updateIntervalTime;

@end

