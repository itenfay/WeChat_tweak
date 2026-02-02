//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, NSData, NSString;

@interface FinderMusicBaikeSummary : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(retain, nonatomic) MMListenCategoryItem *listenCategoryItem;

// Remaining properties
@property(retain, nonatomic) NSString *baidkeIconUrl; // @dynamic baidkeIconUrl;
@property(retain, nonatomic) NSString *baikeCardTitle; // @dynamic baikeCardTitle;
@property(retain, nonatomic) NSData *categoryItem; // @dynamic categoryItem;
@property(nonatomic) unsigned int friendFavs; // @dynamic friendFavs;
@property(nonatomic) unsigned int songsCount; // @dynamic songsCount;

@end

