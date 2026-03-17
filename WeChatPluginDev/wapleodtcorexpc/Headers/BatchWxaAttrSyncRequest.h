//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString, WxaClientPublicLibInfo;

@class WXPBGeneratedMessage;

@interface BatchWxaAttrSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *deviceRelease; // @dynamic deviceRelease;
@property(retain, nonatomic) WxaClientPublicLibInfo *publicLib; // @dynamic publicLib;
@property(retain, nonatomic) NSMutableArray *reqInfoList; // @dynamic reqInfoList;

@end

