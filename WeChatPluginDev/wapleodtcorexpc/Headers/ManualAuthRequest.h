//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class ManualAuthAesReqData, ManualAuthRsaReqData;

@class WXPBGeneratedMessage;

@interface ManualAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ManualAuthAesReqData *aesReqData; // @dynamic aesReqData;
@property(retain, nonatomic) ManualAuthRsaReqData *rsaReqData; // @dynamic rsaReqData;

@end

