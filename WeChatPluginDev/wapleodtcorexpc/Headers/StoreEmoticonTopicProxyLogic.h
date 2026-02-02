//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmotionBannerSet, MMUIViewController, NSString, StoreEmotionAllListReportInfo, StoreEmotionGetEmotionListCgi, UINavigationController;

@interface StoreEmoticonTopicProxyLogic : NSObject
{
    EmotionBannerSet *_bannerSet;
    long long _extranceScene;
    MMUIViewController *_fromVC;
    UINavigationController *_navController;
    unsigned long long _sessionId;
    StoreEmotionAllListReportInfo *_reportInfo;
    StoreEmotionGetEmotionListCgi *_getEmotionListCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionGetEmotionListCgi *getEmotionListCgi; // @synthesize getEmotionListCgi=_getEmotionListCgi;
@property(retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak UINavigationController *navController; // @synthesize navController=_navController;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) long long extranceScene; // @synthesize extranceScene=_extranceScene;
@property(retain, nonatomic) EmotionBannerSet *bannerSet; // @synthesize bannerSet=_bannerSet;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (_Bool)openUpdateTip;
- (id)getNavigationController;
- (_Bool)openWithVC:(id)arg1;
- (void)remoteCheckCapacity;
- (_Bool)localCheckCapacity;
- (id)getAllListViewController;
- (id)getTopicViewController;
- (id)getTopicVC;
- (_Bool)openTopicVC;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

