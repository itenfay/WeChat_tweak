//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveGetFaceVerifyUrlResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isNeedFaceVerify; // @dynamic isNeedFaceVerify;
@property(retain, nonatomic) NSString *secverifyId; // @dynamic secverifyId;
@property(retain, nonatomic) NSString *verifyUrl; // @dynamic verifyUrl;

@end

