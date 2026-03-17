//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetMFriendResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *friendList; // @dynamic friendList;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;

@end

