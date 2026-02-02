//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray;

@class WXPBGeneratedMessage;

@interface ReportLocalWxagVideoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int op; // @dynamic op;
@property(retain, nonatomic) NSMutableArray *videoList; // @dynamic videoList;

@end

