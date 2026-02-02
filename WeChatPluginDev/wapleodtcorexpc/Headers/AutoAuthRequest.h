//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AutoAuthAesReqData, AutoAuthRsaReqData;

@class WXPBGeneratedMessage;

@interface AutoAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AutoAuthAesReqData *aesReqData; // @dynamic aesReqData;
@property(retain, nonatomic) AutoAuthRsaReqData *rsaReqData; // @dynamic rsaReqData;

@end

