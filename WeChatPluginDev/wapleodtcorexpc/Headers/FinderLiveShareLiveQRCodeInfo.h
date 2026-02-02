//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveQRCodePosterStyles, NSMutableArray, NSString;

@interface FinderLiveShareLiveQRCodeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int currentStyleId; // @dynamic currentStyleId;
@property(nonatomic) unsigned int liveCreateTime; // @dynamic liveCreateTime;
@property(retain, nonatomic) NSString *liveShareDesc; // @dynamic liveShareDesc;
@property(retain, nonatomic) NSString *liveSharePicUrl; // @dynamic liveSharePicUrl;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *qrcodeBuffer; // @dynamic qrcodeBuffer;
@property(retain, nonatomic) FinderLiveQRCodePosterStyles *qrcodePosterStyles; // @dynamic qrcodePosterStyles;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(retain, nonatomic) NSMutableArray *qrcodes; // @dynamic qrcodes;

@end

