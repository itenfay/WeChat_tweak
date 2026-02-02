//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, WxaAppBaseResponse;

@interface WxaAppGetShareInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *shareInfo; // @dynamic shareInfo;
@property(retain, nonatomic) NSString *signaturePlatformXml; // @dynamic signaturePlatformXml;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

