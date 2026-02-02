//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RouteInfo, WarningNotice;

@interface CgiTransferBeforeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amountRemindBit; // @dynamic amountRemindBit;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isSupportAddress; // @dynamic isSupportAddress;
@property(retain, nonatomic) NSString *maskTruename; // @dynamic maskTruename;
@property(retain, nonatomic) WarningNotice *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *placeorderReserves; // @dynamic placeorderReserves;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) RouteInfo *rightNavigationItemRouteInfo; // @dynamic rightNavigationItemRouteInfo;
@property(nonatomic) _Bool showReceiverAlias; // @dynamic showReceiverAlias;
@property(retain, nonatomic) NSString *truenameExtend; // @dynamic truenameExtend;

@end

