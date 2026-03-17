//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData;

@class WXPBGeneratedMessage;

@interface GetUserAuthListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool newPage; // @dynamic newPage;
@property(retain, nonatomic) NSData *nextPageData; // @dynamic nextPageData;

@end

