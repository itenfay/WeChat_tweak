//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, ExtRingBackDetail;

@class WXPBGeneratedMessage;

@interface GetMyRingBackResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ExtRingBackDetail *extRingBackDetail; // @dynamic extRingBackDetail;
@property(nonatomic) _Bool isShowEnableCallerListenMyRingBackSwitch; // @dynamic isShowEnableCallerListenMyRingBackSwitch;

@end

