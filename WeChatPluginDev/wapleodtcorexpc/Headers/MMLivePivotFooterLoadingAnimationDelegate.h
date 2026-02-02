//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLivePivotFooterView, NSString;

@interface MMLivePivotFooterLoadingAnimationDelegate : NSObject
{
    MMLivePivotFooterView *_footer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLivePivotFooterView *footer; // @synthesize footer=_footer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

