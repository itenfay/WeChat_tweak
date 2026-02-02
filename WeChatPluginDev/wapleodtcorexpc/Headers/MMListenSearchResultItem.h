//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenItem, MMListenSearchResultItem_LikeInfo, NSString;

@interface MMListenSearchResultItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) MMListenItem *item; // @dynamic item;
@property(retain, nonatomic) MMListenSearchResultItem_LikeInfo *likeInfo; // @dynamic likeInfo;
@property(retain, nonatomic) NSString *listenReportInfo; // @dynamic listenReportInfo;
@property(retain, nonatomic) NSString *recommendDesc; // @dynamic recommendDesc;
@property(retain, nonatomic) NSString *searchReportInfo; // @dynamic searchReportInfo;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

