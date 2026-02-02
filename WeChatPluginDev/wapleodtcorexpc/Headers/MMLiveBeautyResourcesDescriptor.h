//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyResourcePackageModel;

@interface MMLiveBeautyResourcesDescriptor : NSObject
{
    MMLiveBeautyResourcePackageModel *_beautyResources;
    MMLiveBeautyResourcePackageModel *_makeupResources;
    MMLiveBeautyResourcePackageModel *_filterResources;
}

+ (id)savedPackageWithType:(unsigned long long)arg1 scopeId:(id)arg2;
+ (id)savedDescriptorWithScopeId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyResourcePackageModel *filterResources; // @synthesize filterResources=_filterResources;
@property(retain, nonatomic) MMLiveBeautyResourcePackageModel *makeupResources; // @synthesize makeupResources=_makeupResources;
@property(retain, nonatomic) MMLiveBeautyResourcePackageModel *beautyResources; // @synthesize beautyResources=_beautyResources;
- (void)savePackage:(id)arg1 withScopeId:(id)arg2;
- (void)saveDescriptorWithScopeId:(id)arg1;
@property(readonly, nonatomic) _Bool empty;

@end

