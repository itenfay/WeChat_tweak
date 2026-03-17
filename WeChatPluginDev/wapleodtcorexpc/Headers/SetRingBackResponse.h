//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, RingBackTextStatusInfo;

@class WXPBGeneratedMessage;

@interface SetRingBackResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) RingBackTextStatusInfo *textStatusInfo; // @dynamic textStatusInfo;

@end

