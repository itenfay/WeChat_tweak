//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, TingCategoryItem, TingItem;

@interface TingTapeItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)tapeItemFromListenItem:(id)arg1;
+ (id)tapeItemFromCategoryItem:(id)arg1;
- (id)tapeTitle;
- (id)tapeAuthor;
- (id)tapeAuthorIcon;
- (id)tapeCoverUrl;
- (id)tapeClientId;
- (id)tapeId;
- (id)serverUUID;
- (id)localUUID;

// Remaining properties
@property(retain, nonatomic) TingCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) NSMutableArray *listenIdList; // @dynamic listenIdList;
@property(retain, nonatomic) NSMutableArray *localList; // @dynamic localList;
@property(nonatomic) int opType; // @dynamic opType;
@property(retain, nonatomic) TingItem *tingItem; // @dynamic tingItem;
@property(nonatomic) int type; // @dynamic type;

@end

