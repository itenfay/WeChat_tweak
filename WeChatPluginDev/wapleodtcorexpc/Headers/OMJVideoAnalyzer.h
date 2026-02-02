//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJVideoAnalyzer : NSObject
{
    struct shared_ptr<XMJVideoAnalyzer> _backingAnalyzer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)calculateClassifyResult:(id *)arg1;
- (_Bool)feedAudioData:(id)arg1 error:(id *)arg2;
- (_Bool)feedVideoFrameWithImage:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (_Bool)feedVideoFrameWithData:(id)arg1 width:(long long)arg2 height:(long long)arg3 startTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (void)releaseResources;
- (_Bool)initResourcesWithModelInfos:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool isInitialized;
- (id)init;
- (void)dealloc;

@end

