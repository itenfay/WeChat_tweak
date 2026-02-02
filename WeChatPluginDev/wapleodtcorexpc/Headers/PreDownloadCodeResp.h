//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, SyncVersionSingleRespInfo;

@class WXPBGeneratedMessage;

@interface PreDownloadCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *listResp; // @dynamic listResp;
@property(retain, nonatomic) SyncVersionSingleRespInfo *resp; // @dynamic resp;

@end

