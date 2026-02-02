//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMDarkModeObserver : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)observerWithCallback:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)forceFireEvent;
- (void)fireDarkModeChange:(_Bool)arg1;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

