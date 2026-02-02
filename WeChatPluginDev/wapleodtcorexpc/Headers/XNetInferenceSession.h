//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XNetInferenceSession : NSObject
{
    struct shared_ptr<xnet::InferenceSession> _session;
}

+ (id)GetXNetSDKVersion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)modelDescriptionWithError:(id *)arg1;
- (map_941ed0ad)convertObjC2CppTensors:(id)arg1;
- (id)convertCpp2ObjCTensors:(const void *)arg1;
- (id)inference:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

