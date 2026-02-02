//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KSCrashReportFilterObjectForKey : NSObject
{
    _Bool _allowNotFound;
    id _key;
}

+ (id)filterWithKey:(id)arg1 allowNotFound:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowNotFound; // @synthesize allowNotFound=_allowNotFound;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithKey:(id)arg1 allowNotFound:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

