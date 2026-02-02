//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface ReportPayResReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *transferBillId; // @dynamic transferBillId;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(nonatomic) unsigned int unpayType; // @dynamic unpayType;

@end

