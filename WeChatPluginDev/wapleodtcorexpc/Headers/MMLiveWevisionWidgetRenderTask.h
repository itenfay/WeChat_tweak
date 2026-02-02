//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveStorageCleanupPinningToken, MMLiveTask, MMLiveTaskId, MMLiveWevisionWidgetObj, NSString;

@interface MMLiveWevisionWidgetRenderTask : NSObject
{
    _Bool _isStartRender;
    _Bool _isEnding;
    int _prior;
    unsigned int _renderVersion;
    MMLiveWevisionWidgetObj *_widget;
    MMLiveTaskId *_taskId;
    NSString *_renderTaskId;
    unsigned long long _renderState;
    long long _renderScriptId;
    CDUnknownBlockType _endCompletion;
    MMLiveStorageCleanupPinningToken *_resourcePinningToken;
}

+ (id)baseResourceDir;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcePinningToken; // @synthesize resourcePinningToken=_resourcePinningToken;
@property(copy, nonatomic) CDUnknownBlockType endCompletion; // @synthesize endCompletion=_endCompletion;
@property(nonatomic) _Bool isEnding; // @synthesize isEnding=_isEnding;
@property(nonatomic) unsigned int renderVersion; // @synthesize renderVersion=_renderVersion;
@property(nonatomic) long long renderScriptId; // @synthesize renderScriptId=_renderScriptId;
@property(nonatomic) unsigned long long renderState; // @synthesize renderState=_renderState;
@property(retain, nonatomic) NSString *renderTaskId; // @synthesize renderTaskId=_renderTaskId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isStartRender; // @synthesize isStartRender=_isStartRender;
@property(nonatomic) int prior; // @synthesize prior=_prior;
@property(retain) MMLiveWevisionWidgetObj *widget; // @synthesize widget=_widget;
@property(readonly, nonatomic) NSString *instanceId;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (id)getRenderFrameTextureFileName;
- (id)getRenderFrameDirPath;
- (id)getRenderJsonConfigFilePath;
- (id)getActualResourcePath;
- (id)getTemplateResourcePath;
- (_Bool)adjustRenderJsonConfig;
- (_Bool)clearResourcesIfNeeded;
- (_Bool)isCurrentRenderStateInPre;
- (void)endComplete;
- (_Bool)checkIsEnding;
- (_Bool)checkNeedRender;
- (void)increaseRenderVersion;
- (void)clearResources:(CDUnknownBlockType)arg1;
- (void)removeRenderScript:(CDUnknownBlockType)arg1;
- (void)sendRenderMessage:(CDUnknownBlockType)arg1;
- (void)addRenderScript:(CDUnknownBlockType)arg1;
- (void)createResources:(CDUnknownBlockType)arg1;
- (void)endRender:(CDUnknownBlockType)arg1;
- (void)render;
- (void)updatePrior:(int)arg1;
- (void)updateAttributesFromWidget:(id)arg1;
- (id)initWithWidget:(id)arg1 prior:(int)arg2 taskId:(id)arg3;

@end

