//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, StatusCustomInfo, StatusEmoji, StatusExtraInfo, StatusFooterInfoWrapper, StatusPoiInfo, StatusVisibilityInfo;

@interface StatusRawData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StatusCustomInfo *customInfo; // @dynamic customInfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) StatusEmoji *emojiInfo; // @dynamic emojiInfo;
@property(retain, nonatomic) StatusExtraInfo *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) StatusFooterInfoWrapper *footerInfo; // @dynamic footerInfo;
@property(retain, nonatomic) NSMutableArray *mediaInfo; // @dynamic mediaInfo;
@property(nonatomic) unsigned long long option; // @dynamic option;
@property(retain, nonatomic) StatusPoiInfo *poiInto; // @dynamic poiInto;
@property(retain, nonatomic) StatusVisibilityInfo *visibilityInfo; // @dynamic visibilityInfo;

@end

