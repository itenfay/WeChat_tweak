//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, BatchResourceDescriptionList;

@class WXPBGeneratedMessage;

@interface BatchGetResourceDescriptionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BatchResourceDescriptionList *appResp; // @dynamic appResp;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BatchResourceDescriptionList *pushAppResp; // @dynamic pushAppResp;

@end

