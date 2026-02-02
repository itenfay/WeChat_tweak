//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AccountStatusItem, BaseResponse, NSString, PopupItem, TimeItem;

@interface QrySettingResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AccountStatusItem *accountStatusItem; // @dynamic accountStatusItem;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *closeTipsWording; // @dynamic closeTipsWording;
@property(retain, nonatomic) NSString *mainTitleWording; // @dynamic mainTitleWording;
@property(retain, nonatomic) PopupItem *popupItem; // @dynamic popupItem;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *subtitleWording; // @dynamic subtitleWording;
@property(retain, nonatomic) TimeItem *timeItem; // @dynamic timeItem;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

