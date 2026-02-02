//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseEvent, BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface ScreenshotPageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseEvent *baseEvent; // @dynamic baseEvent;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *pageType; // @dynamic pageType;
@property(retain, nonatomic) NSMutableArray *transactionIds; // @dynamic transactionIds;

@end

