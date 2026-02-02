//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPopupDisplayTimingConfig, FinderPopupShowInfo_ShowInfoItem;

@interface FinderPopupShowInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderPopupShowInfo_ShowInfoItem *bubbleShowInfo; // @dynamic bubbleShowInfo;
@property(retain, nonatomic) FinderPopupShowInfo_ShowInfoItem *cardShowInfo; // @dynamic cardShowInfo;
@property(nonatomic) unsigned long long displayTabFlag; // @dynamic displayTabFlag;
@property(retain, nonatomic) FinderPopupDisplayTimingConfig *displayTiming; // @dynamic displayTiming;

@end

