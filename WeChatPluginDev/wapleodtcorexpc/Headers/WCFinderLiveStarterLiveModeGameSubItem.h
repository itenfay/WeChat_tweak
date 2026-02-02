//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGameUserInfo, NSString;

@interface WCFinderLiveStarterLiveModeGameSubItem
{
    NSString *_appId;
    long long _gameEntryScene;
    MMFinderLiveGameUserInfo *_gameUserInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_redDotPath;
+ (void)PBArrayAdd_gameUserInfo;
+ (void)PBArrayAdd_gameEntryScene;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_liveMode;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo; // @synthesize gameUserInfo=_gameUserInfo;
@property(nonatomic) long long gameEntryScene; // @synthesize gameEntryScene=_gameEntryScene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

