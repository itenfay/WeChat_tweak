//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMLiveStorageCleanupPinningToken : NSObject
{
    NSArray *_paths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (void)keepAlive;
- (void)dealloc;
- (id)initWithPinnedPaths:(id)arg1;
- (id)initWithPinnedPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

