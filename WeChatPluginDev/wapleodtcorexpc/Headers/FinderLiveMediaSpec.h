//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class LiveSdkVideoParams, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveMediaSpec : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiveSdkVideoParams *anchorVideoParams; // @dynamic anchorVideoParams;
@property(nonatomic) unsigned int audienceCdnQualityCfg; // @dynamic audienceCdnQualityCfg;
@property(retain, nonatomic) NSString *audienceCdnUrl; // @dynamic audienceCdnUrl;
@property(retain, nonatomic) NSMutableArray *cdnTransInfo; // @dynamic cdnTransInfo;

@end

