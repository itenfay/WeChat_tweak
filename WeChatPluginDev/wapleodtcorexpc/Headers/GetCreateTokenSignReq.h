//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, PayGenActionLocation;

@class WXPBGeneratedMessage;

@interface GetCreateTokenSignReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long creditLine; // @dynamic creditLine;
@property(retain, nonatomic) PayGenActionLocation *location; // @dynamic location;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;

@end

