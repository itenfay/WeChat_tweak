//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenCategoryItem, NSMutableArray;

@interface MMListenCategoriesResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int categoryOffset; // @dynamic categoryOffset;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) MMListenCategoryItem *myAlbums; // @dynamic myAlbums;
@property(retain, nonatomic) MMListenCategoryItem *myLikeHistory; // @dynamic myLikeHistory;
@property(retain, nonatomic) MMListenCategoryItem *myListenHistory; // @dynamic myListenHistory;
@property(nonatomic) int wheelPointer; // @dynamic wheelPointer;

@end

