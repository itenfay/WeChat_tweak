//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, TablePageData;

@interface HKPayPluginResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *disableHkWalletUrl; // @dynamic disableHkWalletUrl;
@property(retain, nonatomic) TablePageData *pluginPage; // @dynamic pluginPage;
@property(retain, nonatomic) NSString *supportCenterUrl; // @dynamic supportCenterUrl;

@end

