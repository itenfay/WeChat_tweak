//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderMusicInfo, FinderUtilsResp_FinderUtilsArticleItem, FinderUtilsResp_FinderUtilsMiniAppItem;

@interface FinderUtilsResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderUtilsResp_FinderUtilsArticleItem *article; // @dynamic article;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderUtilsResp_FinderUtilsMiniAppItem *miniapp; // @dynamic miniapp;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;

@end

