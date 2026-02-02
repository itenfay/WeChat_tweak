//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveNoticeInfo, FinderLiveNoticeQRCodeResponse_PersonalColumnInfo, FinderLiveQRCodePosterStyles, NSData, NSMutableArray, NSString;

@interface FinderLiveNoticeQRCodeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bgImgUrl; // @dynamic bgImgUrl;
@property(nonatomic) unsigned int currentStyleId; // @dynamic currentStyleId;
@property(nonatomic) _Bool enableDescExtend; // @dynamic enableDescExtend;
@property(nonatomic) unsigned int isSpamModPic; // @dynamic isSpamModPic;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(nonatomic) unsigned int modifyEntranceStatus; // @dynamic modifyEntranceStatus;
@property(retain, nonatomic) FinderLiveNoticeQRCodeResponse_PersonalColumnInfo *personalColumnInfo; // @dynamic personalColumnInfo;
@property(retain, nonatomic) NSData *qrcode; // @dynamic qrcode;
@property(retain, nonatomic) FinderLiveQRCodePosterStyles *qrcodePosterStyles; // @dynamic qrcodePosterStyles;
@property(retain, nonatomic) NSMutableArray *qrcodes; // @dynamic qrcodes;
@property(retain, nonatomic) NSString *qrcodeurl; // @dynamic qrcodeurl;

@end

