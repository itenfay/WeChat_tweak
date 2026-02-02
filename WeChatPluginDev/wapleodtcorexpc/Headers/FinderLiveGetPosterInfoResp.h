//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveGetPosterInfoResp_Pos, FinderLiveGetPosterInfoResp_Resource, NSData, NSMutableArray, NSString;

@interface FinderLiveGetPosterInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveGetPosterInfoResp_Resource *brandLogo; // @dynamic brandLogo;
@property(nonatomic) unsigned int horizontalPixel; // @dynamic horizontalPixel;
@property(retain, nonatomic) FinderLiveGetPosterInfoResp_Pos *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) NSString *nicknameSuffix; // @dynamic nicknameSuffix;
@property(retain, nonatomic) NSData *qrcode; // @dynamic qrcode;
@property(retain, nonatomic) FinderLiveGetPosterInfoResp_Resource *qrcodeCenterLogo; // @dynamic qrcodeCenterLogo;
@property(retain, nonatomic) NSString *qrcodeContent; // @dynamic qrcodeContent;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(retain, nonatomic) FinderLiveGetPosterInfoResp_Pos *rightTop; // @dynamic rightTop;
@property(nonatomic) unsigned int signatureButtonPx; // @dynamic signatureButtonPx;
@property(retain, nonatomic) FinderLiveGetPosterInfoResp_Resource *signatureLogo; // @dynamic signatureLogo;
@property(nonatomic) unsigned int signatureRightPx; // @dynamic signatureRightPx;
@property(retain, nonatomic) NSMutableArray *sponsorLogoList; // @dynamic sponsorLogoList;
@property(retain, nonatomic) NSString *subject; // @dynamic subject;
@property(nonatomic) unsigned int verticalPixel; // @dynamic verticalPixel;

@end

