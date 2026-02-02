//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTask, MMLiveTaskId;

@interface MMLiveInteractionGiftMaterialRenderLogic : NSObject
{
    _Bool _isGiftResourcePlaying;
    unsigned int _resourcePlayTime;
    CDUnknownBlockType _beginCallback;
    CDUnknownBlockType _endCallback;
    MMLiveTaskId *_taskId;
    long long _currentResourceObjectId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int resourcePlayTime; // @synthesize resourcePlayTime=_resourcePlayTime;
@property(nonatomic) long long currentResourceObjectId; // @synthesize currentResourceObjectId=_currentResourceObjectId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(copy, nonatomic) CDUnknownBlockType beginCallback; // @synthesize beginCallback=_beginCallback;
@property(nonatomic) _Bool isGiftResourcePlaying; // @synthesize isGiftResourcePlaying=_isGiftResourcePlaying;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)setupAnimationCallback:(id)arg1;
- (void)removeMaterialResource:(id)arg1;
- (id)getMaterialResourceIdVector;
- (_Bool)startMaterialRenderWithResPath:(id)arg1;
- (id)initWithTaskId:(id)arg1;

@end

