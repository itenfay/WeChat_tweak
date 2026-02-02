//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WeNoteZidlImplListenerImpl : NSObject
{
    NSString *_moduleName;
    CDUnknownBlockType _initCompleteHandle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType initCompleteHandle; // @synthesize initCompleteHandle=_initCompleteHandle;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void)readyNotify;
- (void)checkZidlImplReadyWithCompleteHandle:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

