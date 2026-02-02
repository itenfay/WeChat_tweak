//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCheckSpamResponse, TingGetLinkInfo, TingItem, TingPlayItem, TingStartPlayProcessContext;

@interface TingPlayerContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCheckSpamResponse *checkSpamResponse; // @dynamic checkSpamResponse;
@property(retain, nonatomic) TingGetLinkInfo *getLinkInfo; // @dynamic getLinkInfo;
@property(retain, nonatomic) TingItem *originalItem; // @dynamic originalItem;
@property(retain, nonatomic) TingPlayItem *playItem; // @dynamic playItem;
@property(retain, nonatomic) TingItem *playingItem; // @dynamic playingItem;
@property(retain, nonatomic) TingStartPlayProcessContext *startPlayProcessContext; // @dynamic startPlayProcessContext;

@end

