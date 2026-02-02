//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, TextStatusSignatureExtInfo;

@class WXPBGeneratedMessage;

@interface TextStatusGetBrandInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityToken; // @dynamic activityToken;
@property(retain, nonatomic) TextStatusSignatureExtInfo *activityTokenExtInfo; // @dynamic activityTokenExtInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

