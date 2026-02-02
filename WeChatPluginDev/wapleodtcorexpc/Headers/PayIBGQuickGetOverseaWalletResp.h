//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface PayIBGQuickGetOverseaWalletResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cacheTime; // @dynamic cacheTime;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(nonatomic) unsigned int localStorageTime; // @dynamic localStorageTime;
@property(retain, nonatomic) NSString *payWalletWxappH5Url; // @dynamic payWalletWxappH5Url;

@end

