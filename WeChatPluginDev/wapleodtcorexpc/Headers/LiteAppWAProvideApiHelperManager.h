//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface LiteAppWAProvideApiHelperManager : NSObject
{
    NSMutableDictionary *_helpers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *helpers; // @synthesize helpers=_helpers;
- (void)onApiSendEvent:(id)arg1 Name:(id)arg2 Param:(id)arg3;
- (void)onApiEndResult:(id)arg1 Name:(id)arg2 Param:(id)arg3 CallbackId:(unsigned int)arg4;
- (void)releaseApiHelper:(id)arg1;
- (id)getApiHelper:(id)arg1 viewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

