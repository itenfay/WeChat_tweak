//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveSeiStatInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int missedSeiCount; // @dynamic missedSeiCount;
@property(retain, nonatomic) NSMutableArray *seiInfos; // @dynamic seiInfos;
@property(retain, nonatomic) NSString *transcodeTemplateId; // @dynamic transcodeTemplateId;

@end

