//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveMsgBoxInfo_AlertInfo, NSString;

@interface FinderLiveMsgBoxInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveMsgBoxInfo_AlertInfo *alertInfo; // @dynamic alertInfo;
@property(retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *iconName; // @dynamic iconName;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *shortContent; // @dynamic shortContent;
@property(nonatomic) unsigned int showPlacement; // @dynamic showPlacement;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) unsigned int uiStyle; // @dynamic uiStyle;

@end

