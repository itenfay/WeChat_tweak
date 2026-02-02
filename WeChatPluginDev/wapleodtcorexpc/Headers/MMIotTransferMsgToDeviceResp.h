//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMIotNavigateInfo, MMIotWordingInfo, SSVMiniAppRedirectInfo;

@interface MMIotTransferMsgToDeviceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMIotNavigateInfo *navigateInfo; // @dynamic navigateInfo;
@property(nonatomic) _Bool navigateToMiniprogram; // @dynamic navigateToMiniprogram;
@property(retain, nonatomic) SSVMiniAppRedirectInfo *ssvRedirectInfo; // @dynamic ssvRedirectInfo;
@property(retain, nonatomic) MMIotWordingInfo *wordingInfo; // @dynamic wordingInfo;

@end

