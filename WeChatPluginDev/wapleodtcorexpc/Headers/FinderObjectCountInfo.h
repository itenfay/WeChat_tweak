//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderObjectVersionData;

@class WXPBGeneratedMessage;

@interface FinderObjectCountInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(nonatomic) unsigned int favCount; // @dynamic favCount;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(retain, nonatomic) FinderObjectVersionData *versionData; // @dynamic versionData;

@end

