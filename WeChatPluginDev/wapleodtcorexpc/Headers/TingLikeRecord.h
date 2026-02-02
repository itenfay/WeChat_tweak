//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenItem, NSString;

@interface TingLikeRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(nonatomic) _Bool isLocal; // @dynamic isLocal;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) NSString *recordId; // @dynamic recordId;
@property(nonatomic) int type; // @dynamic type;

@end

