//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveStickerBubble, FinderLiveStickerFont, NSMutableArray;

@interface FinderLiveSyncResourceLoadInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *gestureList; // @dynamic gestureList;
@property(nonatomic) unsigned int resourceLoadFlag; // @dynamic resourceLoadFlag;
@property(retain, nonatomic) FinderLiveStickerBubble *stickerBubble; // @dynamic stickerBubble;
@property(retain, nonatomic) FinderLiveStickerFont *stickerFont; // @dynamic stickerFont;

@end

