//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class CallbackRetryConf, NSString;

@class WXPBGeneratedMessage;

@interface WalletMixSpGenprepayResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CallbackRetryConf *callbackRetryConf; // @dynamic callbackRetryConf;
@property(retain, nonatomic) NSString *dialogText; // @dynamic dialogText;
@property(nonatomic) unsigned int needDialog; // @dynamic needDialog;
@property(retain, nonatomic) NSString *payGateUrl; // @dynamic payGateUrl;

@end

