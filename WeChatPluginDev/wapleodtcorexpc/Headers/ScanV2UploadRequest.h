//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizAiScanImageAdInfo, BizAiScanImageJsapiInfo, BizAiScanImageLocation, NSMutableArray;

@interface ScanV2UploadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAiScanImageAdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *images; // @dynamic images;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) BizAiScanImageJsapiInfo *jsapiInfo; // @dynamic jsapiInfo;
@property(retain, nonatomic) BizAiScanImageLocation *location; // @dynamic location;
@property(nonatomic) unsigned int mode; // @dynamic mode;
@property(nonatomic) unsigned int scanType; // @dynamic scanType;
@property(nonatomic) unsigned long long sendSvrTime; // @dynamic sendSvrTime;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;

@end

