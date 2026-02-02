//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class GetWxaDebugInfoResp_ModuleItem_ClientJsExtInfo, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetWxaDebugInfoResp_ModuleItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *checkSumMd5; // @dynamic checkSumMd5;
@property(retain, nonatomic) GetWxaDebugInfoResp_ModuleItem_ClientJsExtInfo *clientJsExtInfo; // @dynamic clientJsExtInfo;
@property(nonatomic) unsigned int devKey; // @dynamic devKey;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(retain, nonatomic) NSString *entranceModule; // @dynamic entranceModule;
@property(retain, nonatomic) NSMutableArray *moduleList; // @dynamic moduleList;
@property(retain, nonatomic) NSMutableArray *widgetList; // @dynamic widgetList;

@end

