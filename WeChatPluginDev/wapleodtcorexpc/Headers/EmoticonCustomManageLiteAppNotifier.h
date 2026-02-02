//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppViewController, NSMutableSet, NSString;

@interface EmoticonCustomManageLiteAppNotifier : NSObject
{
    MMLiteAppViewController *_currentVC;
    NSMutableSet *_observingMd5s;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *observingMd5s; // @synthesize observingMd5s=_observingMd5s;
@property(nonatomic) __weak MMLiteAppViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)notifyUpdateForMd5s:(id)arg1;
- (id)getMd5Status:(id)arg1;
- (void)registerMd5:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

