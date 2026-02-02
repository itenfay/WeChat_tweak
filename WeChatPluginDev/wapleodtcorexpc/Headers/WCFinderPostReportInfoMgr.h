//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface WCFinderPostReportInfoMgr : NSObject
{
    NSMutableDictionary *_keyContainerDic;
    NSMutableDictionary *_reportDic;
    NSMutableSet *_currentLoadingModules;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *currentLoadingModules; // @synthesize currentLoadingModules=_currentLoadingModules;
@property(retain, nonatomic) NSMutableDictionary *reportDic; // @synthesize reportDic=_reportDic;
@property(retain, nonatomic) NSMutableDictionary *keyContainerDic; // @synthesize keyContainerDic=_keyContainerDic;
- (void)checkAndReportPostSession;
- (void)cleanPostSession;
- (void)markPagePostSession:(id)arg1;
- (id)genReportInfo;
- (void)cleanReportInfo;
- (void)markEndLoadingAsModule:(id)arg1 identification:(id)arg2 endReasonType:(int)arg3;
- (void)markStartLoadingAsModule:(id)arg1 identification:(id)arg2;
- (void)markEndLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(int)arg4;
- (void)markStartLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (id)init;

@end

