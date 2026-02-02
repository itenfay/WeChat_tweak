//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizAiScanImageAdInfo, BizAiScanImageJsapiInfo, BizAiScanImageLocation, GoodsObject, NSData, NSString;

@interface BizAiScanImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAiScanImageAdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cameraImgH; // @dynamic cameraImgH;
@property(nonatomic) unsigned int cameraImgW; // @dynamic cameraImgW;
@property(retain, nonatomic) GoodsObject *cropObj; // @dynamic cropObj;
@property(retain, nonatomic) NSData *imgData; // @dynamic imgData;
@property(nonatomic) _Bool isAiCrop; // @dynamic isAiCrop;
@property(nonatomic) _Bool isUseAi; // @dynamic isUseAi;
@property(nonatomic) unsigned int isUserCrop; // @dynamic isUserCrop;
@property(retain, nonatomic) BizAiScanImageJsapiInfo *jsapiInfo; // @dynamic jsapiInfo;
@property(retain, nonatomic) BizAiScanImageLocation *location; // @dynamic location;
@property(nonatomic) unsigned int mode; // @dynamic mode;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int scanid; // @dynamic scanid;
@property(nonatomic) unsigned long long sendSvrTime; // @dynamic sendSvrTime;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

