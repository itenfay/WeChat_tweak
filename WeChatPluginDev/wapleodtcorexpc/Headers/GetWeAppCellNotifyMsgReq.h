//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, WeAppNotifyMsg;

@class WXPBGeneratedMessage;

@interface GetWeAppCellNotifyMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WeAppNotifyMsg *msgInfo; // @dynamic msgInfo;

@end

