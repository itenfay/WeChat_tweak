//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, WxaAppBaseResponse;

@interface CheckDemoInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *applyExprPage; // @dynamic applyExprPage;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasNewDemo; // @dynamic hasNewDemo;
@property(nonatomic) _Bool hasNewDemoPage; // @dynamic hasNewDemoPage;
@property(retain, nonatomic) NSString *newDemoCodeExtJsonInfo; // @dynamic newDemoCodeExtJsonInfo;
@property(retain, nonatomic) NSString *newDemoDownloadUrl; // @dynamic newDemoDownloadUrl;
@property(retain, nonatomic) NSString *newDemoMd5; // @dynamic newDemoMd5;
@property(retain, nonatomic) NSString *newDemoPageDownloadUrl; // @dynamic newDemoPageDownloadUrl;
@property(retain, nonatomic) NSString *newDemoPageMd5; // @dynamic newDemoPageMd5;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

