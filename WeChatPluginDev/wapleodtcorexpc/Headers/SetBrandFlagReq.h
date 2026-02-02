//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface SetBrandFlagReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bitMask; // @dynamic bitMask;
@property(nonatomic) unsigned int bitValue; // @dynamic bitValue;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;

@end

