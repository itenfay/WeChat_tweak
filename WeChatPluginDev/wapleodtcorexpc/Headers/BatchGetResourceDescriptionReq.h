//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, BatchGetResourceDescriptionInfo, NSString, PushDescriptionInfo;

@class WXPBGeneratedMessage;

@interface BatchGetResourceDescriptionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BatchGetResourceDescriptionInfo *appReq; // @dynamic appReq;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *ilinkAppid; // @dynamic ilinkAppid;
@property(retain, nonatomic) PushDescriptionInfo *pushAppReq; // @dynamic pushAppReq;

@end

