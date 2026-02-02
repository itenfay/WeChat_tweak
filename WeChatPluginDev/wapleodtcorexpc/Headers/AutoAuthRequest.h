//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AutoAuthAesReqData, AutoAuthRsaReqData;

@interface AutoAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AutoAuthAesReqData *aesReqData; // @dynamic aesReqData;
@property(retain, nonatomic) AutoAuthRsaReqData *rsaReqData; // @dynamic rsaReqData;

@end

