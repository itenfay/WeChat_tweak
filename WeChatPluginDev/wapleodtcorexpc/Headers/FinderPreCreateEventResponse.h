//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderEventInfo;

@class WXPBGeneratedMessage;

@interface FinderPreCreateEventResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @dynamic eventInfo;
@property(nonatomic) unsigned long long eventTopicId; // @dynamic eventTopicId;

@end

