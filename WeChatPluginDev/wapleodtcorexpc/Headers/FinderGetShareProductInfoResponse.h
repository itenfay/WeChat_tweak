//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderWindowProductInfo, NSString;

@interface FinderGetShareProductInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int isLiving; // @dynamic isLiving;
@property(nonatomic) unsigned int isProductInLivingRoom; // @dynamic isProductInLivingRoom;
@property(retain, nonatomic) NSString *livingFinderUsername; // @dynamic livingFinderUsername;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) NSString *shopLogoUrl; // @dynamic shopLogoUrl;
@property(retain, nonatomic) NSString *tagUrl; // @dynamic tagUrl;

@end

