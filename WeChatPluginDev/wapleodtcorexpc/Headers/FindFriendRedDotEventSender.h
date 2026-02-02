//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface FindFriendRedDotEventSender : NSObject
{
    _Bool _active;
    NSMutableSet *_observingPaths;
    CDUnknownBlockType _redDotValidator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType redDotValidator; // @synthesize redDotValidator=_redDotValidator;
@property(retain, nonatomic) NSMutableSet *observingPaths; // @synthesize observingPaths=_observingPaths;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)addObservingRedDotPaths:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

