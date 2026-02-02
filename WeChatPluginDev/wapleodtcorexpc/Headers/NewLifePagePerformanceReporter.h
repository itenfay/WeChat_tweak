//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NewLifePagePerformanceReporter : NSObject
{
    NSMutableDictionary *_contextMap;
}

+ (void)addExtraInfo:(id)arg1 toParams:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *contextMap; // @synthesize contextMap=_contextMap;
- (void)onClear;
- (id)createStepDesc:(id)arg1;
- (void)internalReportEnterEnd:(id)arg1 timeFromFirstStep:(unsigned long long)arg2 context:(id)arg3 extraInfo:(id)arg4;
- (_Bool)isStepDescNeedReport:(id)arg1;
- (_Bool)isEndStep:(id)arg1 context:(id)arg2;
- (void)internalRecordPageStep:(id)arg1 extraInfo:(id)arg2;
- (void)recordPageStep:(id)arg1;
- (void)recordPageStep:(id)arg1 pageSessionId:(id)arg2 extraInfo:(id)arg3;
- (void)recordPageStep:(id)arg1 pageSessionId:(id)arg2;
- (id)recordPageStart:(id)arg1;
- (id)recordPageStart:(id)arg1 srcPage:(id)arg2;
- (void)dealloc;
- (id)init;

@end

