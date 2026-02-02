//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderLiveErrorPage, FinderLiveLotteryInfo;

@class WXPBGeneratedMessage;

@interface FinderLiveCreateLotteryResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveErrorPage *errorPage; // @dynamic errorPage;
@property(retain, nonatomic) FinderLiveLotteryInfo *lotteryInfo; // @dynamic lotteryInfo;

@end

