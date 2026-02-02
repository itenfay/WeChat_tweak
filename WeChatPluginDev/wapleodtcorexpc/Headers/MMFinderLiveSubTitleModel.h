//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSString;

@interface MMFinderLiveSubTitleModel : NSObject
{
    CDUnknownBlockType _updateBlock;
    MMLiveTaskId *_taskId;
    NSString *_currChnSession;
    NSString *_currEngSession;
    long long _lastChnIndex;
    long long _lastEngIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastEngIndex; // @synthesize lastEngIndex=_lastEngIndex;
@property(nonatomic) long long lastChnIndex; // @synthesize lastChnIndex=_lastChnIndex;
@property(retain, nonatomic) NSString *currEngSession; // @synthesize currEngSession=_currEngSession;
@property(retain, nonatomic) NSString *currChnSession; // @synthesize currChnSession=_currChnSession;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void)onSynchronizedFinderLiveSubTitle:(id)arg1 taskId:(id)arg2;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

