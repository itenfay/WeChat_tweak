//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface ShakeGetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) unsigned int scence; // @dynamic scence;
@property(retain, nonatomic) NSMutableArray *shakeGetList; // @dynamic shakeGetList;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;

@end

