//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class TingItem, TingTapeItem;

@class WXPBGeneratedMessage;

@interface TingPlayTaskPlayingInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int playAppId; // @dynamic playAppId;
@property(retain, nonatomic) TingItem *playingItem; // @dynamic playingItem;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) TingTapeItem *tapeItem; // @dynamic tapeItem;

@end

