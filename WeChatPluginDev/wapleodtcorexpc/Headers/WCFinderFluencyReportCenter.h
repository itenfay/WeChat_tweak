//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderFluencyReportCenter : NSObject
{
    NSMutableDictionary *_sceneDict;
    NSMutableDictionary *_sceneReportBlockDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sceneReportBlockDict; // @synthesize sceneReportBlockDict=_sceneReportBlockDict;
@property(retain, nonatomic) NSMutableDictionary *sceneDict; // @synthesize sceneDict=_sceneDict;
- (void)reportWithSceneKey:(id)arg1;
- (id)phaseItemWithPhaseKey:(id)arg1 andSceneKey:(id)arg2;
- (void)removePhaseItemWithPhaseKey:(id)arg1 andSceneKey:(id)arg2;
- (void)removeAllWithSceneKey:(id)arg1;
- (void)addPhaseItem:(id)arg1 withPhaseKey:(id)arg2 andSceneKey:(id)arg3;
- (void)setReportBlock:(CDUnknownBlockType)arg1 withSceneKey:(id)arg2;

@end

