//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LVStarHandler : NSObject
{
}

- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)_openPlayerDetailFromStar:(id)arg1 targetCommentScene:(int)arg2 starContext:(id)arg3;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)markStar:(id)arg1 starContext:(id)arg2 snapshotInfo:(id)arg3 commentScene:(long long)arg4 generateType:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

