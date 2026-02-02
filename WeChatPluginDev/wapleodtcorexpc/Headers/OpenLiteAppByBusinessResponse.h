//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BizLiteAppInfo, NSString;

@interface OpenLiteAppByBusinessResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BizLiteAppInfo *liteappInfo; // @dynamic liteappInfo;
@property(retain, nonatomic) NSString *page; // @dynamic page;

@end

