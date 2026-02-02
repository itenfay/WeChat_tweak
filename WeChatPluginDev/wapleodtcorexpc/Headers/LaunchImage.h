//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LaunchImage : NSObject
{
    unsigned int _uiBeginTime;
    unsigned int _uiEndTime;
    unsigned int _uiResType;
    unsigned int _uiResSubType;
    unsigned int _uiResVersion;
}

+ (void)parseLaunchImage:(id)arg1 fromMsg:(id)arg2;
+ (id)parseChangeLaunchImage:(id)arg1;
+ (void)saveLaunchImage:(id)arg1;
+ (id)loadLaunchImage;
+ (id)GetLaunchImageConfigPath;
+ (id)GetLaunchImagePath;
+ (void)initialize;
+ (void)PBArrayAdd_uiResVersion;
+ (void)PBArrayAdd_uiResSubType;
+ (void)PBArrayAdd_uiResType;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiBeginTime;
@property(nonatomic) unsigned int uiResVersion; // @synthesize uiResVersion=_uiResVersion;
@property(nonatomic) unsigned int uiResSubType; // @synthesize uiResSubType=_uiResSubType;
@property(nonatomic) unsigned int uiResType; // @synthesize uiResType=_uiResType;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime=_uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime=_uiBeginTime;
- (void)checkResouce;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

