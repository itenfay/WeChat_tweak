//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSCrashReportFilterConcatenate : NSObject
{
    NSString *_separatorFmt;
    NSArray *_keys;
}

+ (id)filterWithSeparatorFmt:(id)arg1 keys:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSString *separatorFmt; // @synthesize separatorFmt=_separatorFmt;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSeparatorFmt:(id)arg1 keysArray:(id)arg2;
- (id)initWithSeparatorFmt:(id)arg1 keys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

