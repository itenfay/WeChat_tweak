//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveLotteryMethodItem;

@interface FinderLiveCheckLotteryBillResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int billStatus; // @dynamic billStatus;
@property(retain, nonatomic) FinderLiveLotteryMethodItem *item; // @dynamic item;
@property(nonatomic) unsigned int methodId; // @dynamic methodId;
@property(nonatomic) unsigned int nextInterval; // @dynamic nextInterval;

@end

