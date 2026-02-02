//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData, NSString;

@class WXPBGeneratedMessage;

@interface BizTransferReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *cmdData; // @dynamic cmdData;
@property(nonatomic) unsigned int cmdId; // @dynamic cmdId;
@property(retain, nonatomic) NSString *mainBrandUserName; // @dynamic mainBrandUserName;

@end

