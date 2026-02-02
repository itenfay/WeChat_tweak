//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KSCrashReportFilterJSONDecode : NSObject
{
    int _encodeOptions;
}

+ (id)filterWithOptions:(int)arg1;
@property(nonatomic) int decodeOptions; // @synthesize decodeOptions=_encodeOptions;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithOptions:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

