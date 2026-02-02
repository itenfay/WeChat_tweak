//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverResponse, NSData, TingReddotReportInfo;

@interface TingMusicSquareClientInsertionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenDiscoverResponse *discvoerInfo; // @dynamic discvoerInfo;
@property(nonatomic) int insertionAction; // @dynamic insertionAction;
@property(retain, nonatomic) NSData *reddotCtrlInfoBuffer; // @dynamic reddotCtrlInfoBuffer;
@property(retain, nonatomic) TingReddotReportInfo *reddotInfo; // @dynamic reddotInfo;

@end

