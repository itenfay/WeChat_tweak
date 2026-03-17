//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderSubtitle, NSData;

@class WXPBGeneratedMessage;

@interface FinderGetSubtitleResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long prefetchTimestamp; // @dynamic prefetchTimestamp;
@property(retain, nonatomic) FinderSubtitle *subtitle; // @dynamic subtitle;

@end

