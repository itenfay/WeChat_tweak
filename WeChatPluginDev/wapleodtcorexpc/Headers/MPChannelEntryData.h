//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPChannelTimelineInfo, MPChannelTopBarInfo, NSString;

@interface MPChannelEntryData
{
    unsigned long long _entryOption;
    MPChannelTopBarInfo *_topBarInfo;
    MPChannelTimelineInfo *_timelineInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_timelineInfo;
+ (void)PBArrayAdd_topBarInfo;
+ (void)PBArrayAdd_entryOption;
- (void).cxx_destruct;
@property(retain, nonatomic) MPChannelTimelineInfo *timelineInfo; // @synthesize timelineInfo=_timelineInfo;
@property(retain, nonatomic) MPChannelTopBarInfo *topBarInfo; // @synthesize topBarInfo=_topBarInfo;
@property(nonatomic) unsigned long long entryOption; // @synthesize entryOption=_entryOption;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

