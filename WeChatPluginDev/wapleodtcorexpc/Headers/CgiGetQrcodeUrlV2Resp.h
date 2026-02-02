//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CgiGetQrcodeUrlV2Resp_BottomEntrance, MenuItem, NSData, NSMutableArray, NSString, QRActionInfo, RealNameInfo, ReceiveOptionInfo;

@interface CgiGetQrcodeUrlV2Resp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CgiGetQrcodeUrlV2Resp_BottomEntrance *bottomEntrance; // @dynamic bottomEntrance;
@property(retain, nonatomic) MenuItem *bottomItem; // @dynamic bottomItem;
@property(retain, nonatomic) NSString *bottomLeftIconUrl; // @dynamic bottomLeftIconUrl;
@property(nonatomic) _Bool bottomRightArrowFlag; // @dynamic bottomRightArrowFlag;
@property(retain, nonatomic) QRActionInfo *longPressAction; // @dynamic longPressAction;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(nonatomic) unsigned int qrcodeLevel; // @dynamic qrcodeLevel;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) _Bool receiveOptionEntrance; // @dynamic receiveOptionEntrance;
@property(retain, nonatomic) ReceiveOptionInfo *receiveOptionInfo; // @dynamic receiveOptionInfo;
@property(nonatomic) unsigned int refreshUrlInterval; // @dynamic refreshUrlInterval;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @dynamic saveNotifyInfo;
@property(nonatomic) int saveQrcodeButtonAction; // @dynamic saveQrcodeButtonAction;
@property(retain, nonatomic) QRActionInfo *screenShotAction; // @dynamic screenShotAction;
@property(retain, nonatomic) NSString *trueName; // @dynamic trueName;
@property(retain, nonatomic) NSMutableArray *upperRightItems; // @dynamic upperRightItems;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

