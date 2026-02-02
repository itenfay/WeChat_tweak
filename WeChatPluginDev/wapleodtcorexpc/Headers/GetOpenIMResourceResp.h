//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AcctTypeResource, AppIdResource, BaseResponse, NSMutableArray;

@interface GetOpenIMResourceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AcctTypeResource *acctTypeResource; // @dynamic acctTypeResource;
@property(retain, nonatomic) AppIdResource *appidResource; // @dynamic appidResource;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *wordingIdResource; // @dynamic wordingIdResource;

@end

