//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderUtilsResp_FinderUtilsArticleItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authorName; // @dynamic authorName;
@property(nonatomic) unsigned int html5InfoStyle; // @dynamic html5InfoStyle;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) NSString *thumbImgUrl; // @dynamic thumbImgUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

