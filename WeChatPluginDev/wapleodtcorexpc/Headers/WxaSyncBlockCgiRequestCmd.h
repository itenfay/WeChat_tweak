//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, WxaSyncBaseCmd;

@class WXPBGeneratedMessage;

@interface WxaSyncBlockCgiRequestCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(nonatomic) unsigned int blockBeginTime; // @dynamic blockBeginTime;
@property(retain, nonatomic) NSMutableArray *blockCgis; // @dynamic blockCgis;
@property(nonatomic) unsigned int blockEndTime; // @dynamic blockEndTime;
@property(retain, nonatomic) NSMutableArray *sceneList; // @dynamic sceneList;

@end

