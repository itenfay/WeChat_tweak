//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, EmotionCDNUrl, PanelDesignerIPInfo;

@class WXPBGeneratedMessage;

@interface ExchangeEmotionPackResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) EmotionCDNUrl *downloadInfo; // @dynamic downloadInfo;
@property(retain, nonatomic) PanelDesignerIPInfo *updatePanelDesignerIpinfo; // @dynamic updatePanelDesignerIpinfo;

@end

