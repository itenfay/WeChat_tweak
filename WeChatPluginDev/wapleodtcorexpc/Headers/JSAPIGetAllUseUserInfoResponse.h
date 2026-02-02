//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface JSAPIGetAllUseUserInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSMutableArray *authScopeItemList; // @dynamic authScopeItemList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *privacyScopeItemList; // @dynamic privacyScopeItemList;

@end

