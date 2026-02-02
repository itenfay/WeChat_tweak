//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class RedDotReportItem_BoxInfo, RedDotReportItem_ItemInfo;

@class WXPBGeneratedMessage;

@interface RedDotReportItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actType; // @dynamic actType;
@property(retain, nonatomic) RedDotReportItem_BoxInfo *boxInfo; // @dynamic boxInfo;
@property(retain, nonatomic) RedDotReportItem_ItemInfo *itemInfo; // @dynamic itemInfo;

@end

