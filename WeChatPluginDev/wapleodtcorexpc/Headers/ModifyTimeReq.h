//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, TimeSpan;

@class WXPBGeneratedMessage;

@interface ModifyTimeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *payPasswdEnc; // @dynamic payPasswdEnc;
@property(retain, nonatomic) TimeSpan *time; // @dynamic time;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

