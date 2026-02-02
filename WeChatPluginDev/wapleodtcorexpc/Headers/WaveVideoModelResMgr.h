//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WaveVideoModelResMgr
{
}

+ (id)kvStatString:(int)arg1;
+ (int)exptSwitch:(int)arg1;
+ (id)resFileMd5:(int)arg1 subtype:(int)arg2;
+ (void)modelSaveWithName:(unsigned int)arg1 subType:(unsigned int)arg2 modelName:(id)arg3;
+ (id)modelPathWithName:(id)arg1;
+ (id)modelDir;
+ (id)VOIPDir;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

