//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveStarterLiveModeAudioSubItem
{
    unsigned long long _audioSubType;
}

+ (void)initialize;
+ (void)PBArrayAdd_redDotPath;
+ (void)PBArrayAdd_audioSubType;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_liveMode;
@property(nonatomic) unsigned long long audioSubType; // @synthesize audioSubType=_audioSubType;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

