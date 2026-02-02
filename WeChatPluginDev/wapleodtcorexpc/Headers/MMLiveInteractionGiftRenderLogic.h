//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveInteractionGiftLuaScriptRenderLogic, MMLiveInteractionGiftMaterialRenderLogic, MMLiveTask, MMLiveTaskId;

@interface MMLiveInteractionGiftRenderLogic : NSObject
{
    _Bool _isRenderWillEnd;
    MMLiveInteractionGiftMaterialRenderLogic *_materialRenderLogic;
    MMLiveInteractionGiftLuaScriptRenderLogic *_luaScriptRenderLogic;
    MMLiveTaskId *_taskId;
    long long _currentRenderType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRenderWillEnd; // @synthesize isRenderWillEnd=_isRenderWillEnd;
@property(nonatomic) long long currentRenderType; // @synthesize currentRenderType=_currentRenderType;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveInteractionGiftLuaScriptRenderLogic *luaScriptRenderLogic; // @synthesize luaScriptRenderLogic=_luaScriptRenderLogic;
@property(retain, nonatomic) MMLiveInteractionGiftMaterialRenderLogic *materialRenderLogic; // @synthesize materialRenderLogic=_materialRenderLogic;
- (void)onCurrRenderEnd;
- (long long)checkInteractionGiftRenderType:(id)arg1;
@property(readonly, nonatomic) _Bool isGiftResourcePlaying;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)removeInteractionResource:(id)arg1;
- (id)getCurInteractionResourceIdVector;
- (_Bool)startInteractionGiftWithResPath:(id)arg1;
- (void)createLuaScriptRenderLogic;
- (void)createMaterialRenderLogic;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1;

@end

