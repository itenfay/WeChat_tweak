//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CaraCppSessionFeatureCenter, NSString;

@interface CaraAppleSessionFeatureCenter : NSObject
{
    CaraCppSessionFeatureCenter *_underlying;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CaraCppSessionFeatureCenter *underlying; // @synthesize underlying=_underlying;
- (void)onSessionSend:(id)arg1;
- (void)onConsumeSession:(id)arg1 stayTimeInterval:(float)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

