//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMarkMarkReadStatModel : NSObject
{
    _Bool _autoPlayWithSound;
    int _commentScene;
    NSString *_tid;
    unsigned long long _markReadScene;
    unsigned long long _markReadSubScene;
    long long _actionType;
    NSString *_sessionBuffer;
    unsigned long long _duration;
    unsigned long long _index;
    unsigned long long _areaId;
    unsigned long long _autoPlayTimeMs;
    unsigned long long _startExposeMs;
    unsigned long long _effectiveExposeTimeMs;
    unsigned long long _startEffectiveExposeTimeMs;
}

+ (void)initialize;
+ (void)PBArrayAdd_areaId;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_autoPlayWithSound;
+ (void)PBArrayAdd_autoPlayTimeMs;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_markReadSubScene;
+ (void)PBArrayAdd_markReadScene;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long startEffectiveExposeTimeMs; // @synthesize startEffectiveExposeTimeMs=_startEffectiveExposeTimeMs;
@property(nonatomic) unsigned long long effectiveExposeTimeMs; // @synthesize effectiveExposeTimeMs=_effectiveExposeTimeMs;
@property(nonatomic) unsigned long long startExposeMs; // @synthesize startExposeMs=_startExposeMs;
@property(nonatomic) _Bool autoPlayWithSound; // @synthesize autoPlayWithSound=_autoPlayWithSound;
@property(nonatomic) unsigned long long autoPlayTimeMs; // @synthesize autoPlayTimeMs=_autoPlayTimeMs;
@property(nonatomic) unsigned long long areaId; // @synthesize areaId=_areaId;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long markReadSubScene; // @synthesize markReadSubScene=_markReadSubScene;
@property(nonatomic) unsigned long long markReadScene; // @synthesize markReadScene=_markReadScene;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)initWithScene:(unsigned long long)arg1 subScene:(unsigned long long)arg2 tid:(id)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5 duration:(long long)arg6 autoPlayTimeMs:(unsigned long long)arg7 autoPlayWithSound:(_Bool)arg8 startExposeMs:(unsigned long long)arg9 actionType:(long long)arg10 effectiveExposeTimeMs:(unsigned long long)arg11 startEffectiveExposeTimeMs:(unsigned long long)arg12 areaId:(unsigned long long)arg13;
- (id)initWithScene:(unsigned long long)arg1 subScene:(unsigned long long)arg2 tid:(id)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5 duration:(long long)arg6;
- (id)initWithScene:(unsigned long long)arg1 subScene:(unsigned long long)arg2 tid:(id)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

