//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveGetUserGameConfigResponse_GameCategoryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(retain, nonatomic) NSMutableArray *gameAppInfoList; // @dynamic gameAppInfoList;
@property(nonatomic) _Bool hasNext; // @dynamic hasNext;
@property(retain, nonatomic) NSString *queryBuffer; // @dynamic queryBuffer;

@end

