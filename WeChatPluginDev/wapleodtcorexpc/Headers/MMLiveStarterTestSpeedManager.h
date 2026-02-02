//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveStarterTestSpeedManager : NSObject
{
    struct shared_ptr<MyCallback> testSpeedCallback;
    struct LiveSpeedTestResult testrResult;
    _Bool _isComplete;
    CDUnknownBlockType _testSpeedBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(copy, nonatomic) CDUnknownBlockType testSpeedBlock; // @synthesize testSpeedBlock=_testSpeedBlock;
- (void)forceStopRequest;
- (void)safeCompleteMethod;
- (void)testSpeedParameterRequestWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)testSpeedComplete:(struct LiveSpeedTestResult *)arg1;
- (void)testSpeedRequestWithModel:(id)arg1 testSpeedBlock:(CDUnknownBlockType)arg2;

@end

