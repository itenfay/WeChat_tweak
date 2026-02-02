//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveStarterLiveModeAudioSubItem, WCFinderLiveStarterLiveModeGameSubItem, WCFinderLiveStarterLiveModeSubItem, WCFinderLiveStarterLiveModeVideoSubItem;

@interface WCFinderLiveStarterLiveModeCacheItem : NSObject
{
    unsigned long long _liveMode;
    WCFinderLiveStarterLiveModeVideoSubItem *_videoSubItem;
    WCFinderLiveStarterLiveModeAudioSubItem *_audioSubItem;
    WCFinderLiveStarterLiveModeGameSubItem *_gameSubItem;
    WCFinderLiveStarterLiveModeSubItem *_ktvSubItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_ktvSubItem;
+ (void)PBArrayAdd_gameSubItem;
+ (void)PBArrayAdd_audioSubItem;
+ (void)PBArrayAdd_videoSubItem;
+ (void)PBArrayAdd_liveMode;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *ktvSubItem; // @synthesize ktvSubItem=_ktvSubItem;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeGameSubItem *gameSubItem; // @synthesize gameSubItem=_gameSubItem;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeAudioSubItem *audioSubItem; // @synthesize audioSubItem=_audioSubItem;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeVideoSubItem *videoSubItem; // @synthesize videoSubItem=_videoSubItem;
@property(nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

