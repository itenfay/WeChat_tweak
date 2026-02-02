//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTask, MMLiveTaskId, NSMutableDictionary;

@interface MMLiveInteractionGiftLuaScriptRenderLogic : NSObject
{
    _Bool _isGiftResourcePlaying;
    _Bool _isRenderStart;
    CDUnknownBlockType _beginCallback;
    CDUnknownBlockType _endCallback;
    MMLiveTaskId *_taskId;
    unsigned long long _renderSeq;
    NSMutableDictionary *_renderScriptDict;
    NSMutableDictionary *_resourcePinningTokens;
}

+ (id)baseResourceDir;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *resourcePinningTokens; // @synthesize resourcePinningTokens=_resourcePinningTokens;
@property(retain, nonatomic) NSMutableDictionary *renderScriptDict; // @synthesize renderScriptDict=_renderScriptDict;
@property(nonatomic) unsigned long long renderSeq; // @synthesize renderSeq=_renderSeq;
@property(nonatomic) _Bool isRenderStart; // @synthesize isRenderStart=_isRenderStart;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(copy, nonatomic) CDUnknownBlockType beginCallback; // @synthesize beginCallback=_beginCallback;
@property(nonatomic) _Bool isGiftResourcePlaying; // @synthesize isGiftResourcePlaying=_isGiftResourcePlaying;
- (id)getLocalResourcePath;
- (void)removeResPath:(id)arg1;
- (id)getScriptResourcePath:(id)arg1;
- (id)createActualResPathWithSuffix:(id)arg1;
- (void)createActualResPathWithInitialResPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getAllRenderScriptIds;
- (id)getRenderTaskWithScriptId:(long long)arg1;
- (_Bool)isContainRenderScriptId:(long long)arg1;
- (void)unRegisterRenderScriptId:(long long)arg1;
- (void)registerRenderScriptId:(long long)arg1 withResPath:(id)arg2 renderSeq:(unsigned long long)arg3;
- (void)clearTags;
- (_Bool)checkIsCurrRender:(unsigned long long)arg1;
- (void)onScriptEnd:(long long)arg1 withResult:(long long)arg2 renderSeq:(unsigned long long)arg3;
- (void)onScriptBegin:(long long)arg1;
- (void)removeLuaScriptResourceWithClearSrc:(long long)arg1;
- (void)addRenderScriptWithResPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRenderWithResPath:(id)arg1;
- (void)increaseRenderSeq;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (_Bool)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)removeLuaScriptResource:(id)arg1;
- (id)getLuaScriptResourceIdVector;
- (_Bool)startLuaScriptRenderWithResPath:(id)arg1;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1;

@end

