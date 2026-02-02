//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCSpecialEnteranceRepoter : NSObject
{
    unsigned long long _nearbyTabType;
    unsigned long long _nearbySubTabType;
    NSString *_finderTabSessionID;
    NSString *_finderContextID;
    NSMutableDictionary *_specialSessionDatas;
    NSMutableDictionary *_specialPageDatas;
    NSMutableArray *_specialSessionConfig;
    NSMutableArray *_specialPageConfig;
    _Bool m_isReplenishPopEvent;
    NSMutableSet *_finderPhotoWallConfig;
    NSString *_cacheAppearPageName;
    unsigned long long _cacheAppearHashCode;
}

- (void).cxx_destruct;
- (void)onFinderPOIDisappear:(id)arg1;
- (void)onFinderPOIAppear:(id)arg1;
- (void)onFinderPOIPop:(id)arg1;
- (void)onFinderPOIPush:(id)arg1;
- (void)onFinderTopicListDisappear:(unsigned long long)arg1;
- (void)onFinderTopicListAppear:(unsigned long long)arg1;
- (void)onFinderTopicListQuit:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onFinderTopicListEnter:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onNearbyLifeSubTabDisappear:(unsigned long long)arg1;
- (void)onNearbyLifeSubTabAppear:(unsigned long long)arg1;
- (void)onNearbyLiveSubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyLiveSubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyTabDisappear:(unsigned long long)arg1;
- (void)onNearbyTabAppear:(unsigned long long)arg1;
- (void)onFinderTabDisappear:(long long)arg1;
- (void)onFinderTabAppear:(long long)arg1;
- (void)onFinderPageEnter:(id)arg1 vc:(id)arg2;
- (void)onFinderPageQuit:(id)arg1 vc:(id)arg2;
- (void)onFinderPageDisappear:(id)arg1 logID:(unsigned long long)arg2;
- (void)onFinderPageAppear:(id)arg1 logID:(unsigned long long)arg2;
- (_Bool)isSepecialSessionReportConflict;
- (id)getSpecialPageConfig:(id)arg1;
- (id)getSpecialSessionConfig:(id)arg1;
- (void)initSpecialPageConfigs;
- (void)initSpecialSessionConfigs;
- (void)reportSpecialSessionData:(id)arg1;
- (void)reportSpecialPageData:(id)arg1;
- (_Bool)checkIsNeedFixFinderEventByPhotoWall:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (_Bool)checkIsFinderInPhotoWall:(id)arg1;
- (_Bool)isHalfFinderPoiDetailVC:(id)arg1;
- (_Bool)checkTopViewControllerIsHalfPage:(id)arg1;
- (void)onSpecialPageDisappear:(id)arg1;
- (_Bool)onSpecialPageAppear:(id)arg1;
- (void)onSpecialSessionQuit:(id)arg1 withHashCode:(unsigned long long)arg2;
- (void)onSpecialSessionEnter:(id)arg1 withHashCode:(unsigned long long)arg2;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onClearData;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

