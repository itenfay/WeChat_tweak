//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenItem, NSString, TingPlayContext, TingPlayItem;

@interface TingItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)tingItemFromRaw:(id)arg1;
- (id)copy;
- (void)switchToBackupItem;
- (void)updateWithListenItem:(id)arg1;
- (id)uuid;
- (int)durationMs;
- (id)webUrl;
- (id)audioUrl;
- (id)authorName;
- (id)subtitle;
- (id)title;
- (id)iconRemoteOrLocalUrl;
- (id)iconUrl;
- (_Bool)isValid;
- (_Bool)isSupportOpenDetailPage;
- (_Bool)isSupportOpenAuthorPage;
- (id)debugDescription;
- (_Bool)isSameListenItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)toFavItemWithCoverImageData:(id)arg1;
- (id)toWCUpLoadTaskWithCoverImageData:(id)arg1;
- (id)toChatMessageWithCoverImageData:(id)arg1;
- (id)toShareItem;
- (_Bool)isPlaying;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) TingPlayContext *context; // @dynamic context;
@property(nonatomic) unsigned int dataSource; // @dynamic dataSource;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) TingPlayItem *playItem; // @dynamic playItem;

@end

