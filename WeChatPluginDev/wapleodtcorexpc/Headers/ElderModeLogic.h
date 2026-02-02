//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ElderModeLogic : NSObject
{
    NSMutableArray *_oplogInfos;
}

+ (void)refreshColorSetting;
+ (void)effectElderModeOn;
+ (void)setSilentModeOn:(_Bool)arg1;
+ (void)setTTSModeOn:(_Bool)arg1;
+ (void)setSpecialRenderModeOn:(_Bool)arg1;
+ (void)setElderModeOn:(_Bool)arg1;
+ (void)closeElderModeIfNeed;
+ (_Bool)allSubModeOff;
+ (_Bool)isSilentModeBitOn;
+ (_Bool)isSilentModeOn;
+ (_Bool)isTTSModeOn;
+ (_Bool)isSpecialRenderModeOn;
+ (_Bool)isElderModeOn;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *oplogInfos; // @synthesize oplogInfos=_oplogInfos;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)setSilentModeOn:(_Bool)arg1;
- (void)setTTSModeOn:(_Bool)arg1;
- (void)setSpecialRenderModeOn:(_Bool)arg1;
- (void)setElderModeOn:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

