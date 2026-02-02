//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AudioPushConfig, BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface MMListenAudioPushResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) AudioPushConfig *pushConfig; // @dynamic pushConfig;
@property(retain, nonatomic) NSMutableArray *pushContent; // @dynamic pushContent;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;

@end

