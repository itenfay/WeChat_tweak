//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSCrashReportFilterSubset : NSObject
{
    NSArray *_keyPaths;
}

+ (id)filterWithKeys:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithKeysArray:(id)arg1;
- (id)initWithKeys:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

