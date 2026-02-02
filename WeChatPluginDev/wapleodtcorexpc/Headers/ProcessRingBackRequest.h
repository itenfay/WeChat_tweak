//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, SimpleRingBack;

@class WXPBGeneratedMessage;

@interface ProcessRingBackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opFlag; // @dynamic opFlag;
@property(retain, nonatomic) SimpleRingBack *simpleRingBack; // @dynamic simpleRingBack;

@end

