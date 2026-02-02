//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray;

@class WXPBGeneratedMessage;

@interface GetVUserInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(nonatomic) unsigned int vuserCount; // @dynamic vuserCount;
@property(retain, nonatomic) NSMutableArray *vuserList; // @dynamic vuserList;

@end

