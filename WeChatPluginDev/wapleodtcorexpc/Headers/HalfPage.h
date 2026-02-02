//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BannerViewData, NSMutableArray, NSString, QRButtonInfo, TitleInfo;

@interface HalfPage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BannerViewData *guideViewBanner; // @dynamic guideViewBanner;
@property(retain, nonatomic) QRButtonInfo *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) QRButtonInfo *rightButton; // @dynamic rightButton;
@property(nonatomic) _Bool showGuideBanner; // @dynamic showGuideBanner;
@property(retain, nonatomic) TitleInfo *titleInfo; // @dynamic titleInfo;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;
@property(retain, nonatomic) NSMutableArray *wordingList; // @dynamic wordingList;
@property(nonatomic) int wordingType; // @dynamic wordingType;

@end

