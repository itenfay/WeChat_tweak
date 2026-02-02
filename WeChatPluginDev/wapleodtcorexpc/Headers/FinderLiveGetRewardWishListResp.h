//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderLiveGetRewardWishListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isAchieved; // @dynamic isAchieved;
@property(nonatomic) _Bool isActive; // @dynamic isActive;
@property(nonatomic) unsigned long long totalCurCount; // @dynamic totalCurCount;
@property(nonatomic) unsigned long long totalTargetCount; // @dynamic totalTargetCount;
@property(retain, nonatomic) NSMutableArray *wishList; // @dynamic wishList;

@end

