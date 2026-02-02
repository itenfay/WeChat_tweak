//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class TingItem, TingListFliterCondiction, TingTapeItem;

@interface TingTaskSnapshot : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)playingCoverUrl;

// Remaining properties
@property(retain, nonatomic) TingListFliterCondiction *fliterCondiction; // @dynamic fliterCondiction;
@property(nonatomic) int lastModifiedTime; // @dynamic lastModifiedTime;
@property(nonatomic) int playAppId; // @dynamic playAppId;
@property(retain, nonatomic) TingItem *playingItem; // @dynamic playingItem;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) TingTapeItem *tapeItem; // @dynamic tapeItem;

@end

