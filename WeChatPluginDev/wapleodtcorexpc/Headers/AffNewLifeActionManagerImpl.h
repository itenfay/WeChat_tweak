//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AffNewLifeActionManagerCallback, NSString;

@interface AffNewLifeActionManagerImpl : NSObject
{
    AffNewLifeActionManagerCallback *callback;
}

- (void).cxx_destruct;
- (void)doActionAsync:(int)arg1 req:(id)arg2;
- (id)doActionSync:(id)arg1;
- (void)setCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

