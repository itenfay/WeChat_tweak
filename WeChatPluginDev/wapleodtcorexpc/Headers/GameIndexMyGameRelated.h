//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameIndexMyGameRelated_IndexMyGamePicTpl, GameIndexMyGameRelated_IndexMyGameTextTpl, GameIndexMyGameRelated_IndexMyGameVideoCenterTpl, GameIndexMyGameRelated_VideoRecomTpl, NSString;

@interface GameIndexMyGameRelated : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bizType; // @dynamic bizType;
@property(retain, nonatomic) NSString *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) NSString *moduleSubTitle; // @dynamic moduleSubTitle;
@property(retain, nonatomic) NSString *moduleTitle; // @dynamic moduleTitle;
@property(nonatomic) unsigned int positionId; // @dynamic positionId;
@property(nonatomic) unsigned int tplId; // @dynamic tplId;
@property(retain, nonatomic) GameIndexMyGameRelated_IndexMyGamePicTpl *tplPic; // @dynamic tplPic;
@property(retain, nonatomic) GameIndexMyGameRelated_IndexMyGameTextTpl *tplText; // @dynamic tplText;
@property(retain, nonatomic) GameIndexMyGameRelated_IndexMyGameVideoCenterTpl *tplVideoCenter; // @dynamic tplVideoCenter;
@property(retain, nonatomic) GameIndexMyGameRelated_VideoRecomTpl *tplVideoRecom; // @dynamic tplVideoRecom;

@end

