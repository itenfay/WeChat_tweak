//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSnsDelayShowInfo, WCSnsPreLoadInfo, WCSnsRepeatUrlInfo, WCSnsSocialInfluenceInfo;

@interface WCSnsOperation
{
    WCSnsSocialInfluenceInfo *_socialInfluenceInfo;
    WCSnsPreLoadInfo *_preloadInfo;
    WCSnsDelayShowInfo *_delayShowInfo;
    WCSnsRepeatUrlInfo *_repeatUrlInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_repeatUrlInfo;
+ (void)PBArrayAdd_delayShowInfo;
+ (void)PBArrayAdd_preloadInfo;
+ (void)PBArrayAdd_socialInfluenceInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsRepeatUrlInfo *repeatUrlInfo; // @synthesize repeatUrlInfo=_repeatUrlInfo;
@property(retain, nonatomic) WCSnsDelayShowInfo *delayShowInfo; // @synthesize delayShowInfo=_delayShowInfo;
@property(retain, nonatomic) WCSnsPreLoadInfo *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(retain, nonatomic) WCSnsSocialInfluenceInfo *socialInfluenceInfo; // @synthesize socialInfluenceInfo=_socialInfluenceInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

