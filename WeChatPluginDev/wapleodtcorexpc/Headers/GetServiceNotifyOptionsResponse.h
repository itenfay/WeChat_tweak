//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray;

@class WXPBGeneratedMessage;

@interface GetServiceNotifyOptionsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *bizOptions; // @dynamic bizOptions;
@property(nonatomic) unsigned int bizOptionsTotal; // @dynamic bizOptionsTotal;
@property(nonatomic) _Bool customSessionGlobalSwitch; // @dynamic customSessionGlobalSwitch;
@property(retain, nonatomic) NSMutableArray *customSessionWxaOptions; // @dynamic customSessionWxaOptions;
@property(nonatomic) _Bool globalSwitch; // @dynamic globalSwitch;
@property(retain, nonatomic) NSMutableArray *wxaOptions; // @dynamic wxaOptions;
@property(nonatomic) unsigned int wxaOptionsTotal; // @dynamic wxaOptionsTotal;
@property(nonatomic) unsigned int wxaSubscribeAudioSwitch; // @dynamic wxaSubscribeAudioSwitch;

@end

