//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetGameIndex4FeedsListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *feedsList; // @dynamic feedsList;
@property(nonatomic) _Bool hasNext; // @dynamic hasNext;
@property(retain, nonatomic) NSString *moduleTitle; // @dynamic moduleTitle;
@property(retain, nonatomic) NSData *nextPageInfo; // @dynamic nextPageInfo;

@end

