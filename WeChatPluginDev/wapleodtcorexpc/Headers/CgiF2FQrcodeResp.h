//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MenuItem, MiniProgramInfo, NSData, NSMutableArray, NSString, QRActionInfo, RealNameInfo;

@interface CgiF2FQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MenuItem *bottomItem; // @dynamic bottomItem;
@property(retain, nonatomic) NSString *bottomLeftIconUrl; // @dynamic bottomLeftIconUrl;
@property(nonatomic) _Bool bottomRightArrowFlag; // @dynamic bottomRightArrowFlag;
@property(nonatomic) unsigned int busiType; // @dynamic busiType;
@property(retain, nonatomic) MiniProgramInfo *buyMaterialInfo; // @dynamic buyMaterialInfo;
@property(nonatomic) unsigned int guideMaterialFlag; // @dynamic guideMaterialFlag;
@property(retain, nonatomic) QRActionInfo *longPressAction; // @dynamic longPressAction;
@property(retain, nonatomic) NSString *longpressMaterialWording; // @dynamic longpressMaterialWording;
@property(retain, nonatomic) NSString *mchName; // @dynamic mchName;
@property(retain, nonatomic) NSString *mchPhoto; // @dynamic mchPhoto;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(nonatomic) unsigned int qrcodeLevel; // @dynamic qrcodeLevel;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @dynamic saveNotifyInfo;
@property(retain, nonatomic) QRActionInfo *saveQrcodeAction; // @dynamic saveQrcodeAction;
@property(retain, nonatomic) NSString *saveqrcodeMaterialWording; // @dynamic saveqrcodeMaterialWording;
@property(retain, nonatomic) QRActionInfo *screenShotAction; // @dynamic screenShotAction;
@property(retain, nonatomic) NSString *screenshotMaterialWording; // @dynamic screenshotMaterialWording;
@property(retain, nonatomic) NSString *trueName; // @dynamic trueName;
@property(retain, nonatomic) NSMutableArray *upperRightItems; // @dynamic upperRightItems;
@property(retain, nonatomic) NSString *upperWording; // @dynamic upperWording;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

