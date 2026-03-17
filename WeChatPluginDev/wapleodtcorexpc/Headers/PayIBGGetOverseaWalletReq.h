//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface PayIBGGetOverseaWalletReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int isShowTips; // @dynamic isShowTips;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *osVer; // @dynamic osVer;
@property(retain, nonatomic) NSString *phoneType; // @dynamic phoneType;
@property(retain, nonatomic) NSString *wxgVer; // @dynamic wxgVer;

@end

