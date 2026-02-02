//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface JSOAuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *oauthTitle; // @dynamic oauthTitle;
@property(nonatomic) unsigned int scopeCount; // @dynamic scopeCount;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;

@end

