//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MMListenJumpAppInfo, NSString;

@class WXPBGeneratedMessage;

@interface MMListenDiscoverResponse_JumpableTopToast : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long adExpireTimeS; // @dynamic adExpireTimeS;
@property(retain, nonatomic) MMListenJumpAppInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *jumpWording; // @dynamic jumpWording;
@property(retain, nonatomic) NSString *leftWording; // @dynamic leftWording;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

