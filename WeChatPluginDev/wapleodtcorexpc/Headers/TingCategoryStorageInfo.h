//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, NSData, NSMutableArray, NSString;

@interface TingCategoryStorageInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(nonatomic) int clientListVersion; // @dynamic clientListVersion;
@property(nonatomic) unsigned long long expireTimeS; // @dynamic expireTimeS;
@property(retain, nonatomic) NSMutableArray *fetchIdList; // @dynamic fetchIdList;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool hasMoreOnTop; // @dynamic hasMoreOnTop;
@property(retain, nonatomic) NSMutableArray *idListResult; // @dynamic idListResult;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *updateMd5; // @dynamic updateMd5;
@property(nonatomic) unsigned long long updateTime; // @dynamic updateTime;

@end

