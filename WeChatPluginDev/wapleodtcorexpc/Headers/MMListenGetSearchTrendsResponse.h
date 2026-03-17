//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface MMListenGetSearchTrendsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *listenInfo; // @dynamic listenInfo;
@property(retain, nonatomic) NSString *searchInfo; // @dynamic searchInfo;
@property(retain, nonatomic) NSMutableArray *searchTrendItems; // @dynamic searchTrendItems;
@property(nonatomic) unsigned long long timeGap; // @dynamic timeGap;

@end

