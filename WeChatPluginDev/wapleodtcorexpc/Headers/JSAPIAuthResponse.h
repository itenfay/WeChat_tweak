//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, JSAPIBaseResponse, NSMutableArray, NSString;

@interface JSAPIAuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) NSString *authTitle; // @dynamic authTitle;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse; // @dynamic jsapiBaseresponse;
@property(retain, nonatomic) NSMutableArray *scopeAuthInfo; // @dynamic scopeAuthInfo;

@end

