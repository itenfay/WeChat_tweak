//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCASRProcessor : NSObject
{
    struct SharedPtr<XMFASRProcessor> _backingProcessor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithPCMData:(id)arg1;
- (_Bool)isResourcesReady;
- (void)releaseResources;
- (_Bool)initResourcesWithConfigFilePath:(id)arg1 modelFilePath:(id)arg2 cmsFilePath:(id)arg3;
- (id)init;

@end

