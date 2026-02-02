//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface PurchaseFromBankGuideReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clickState; // @dynamic clickState;
@property(nonatomic) unsigned int showingState; // @dynamic showingState;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

