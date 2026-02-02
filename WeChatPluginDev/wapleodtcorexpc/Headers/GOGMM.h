//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GOGMM : NSObject
{
    _Bool _ignoreFeatures;
    _Bool _ignorePhash;
    _Bool _ignorePdqhash;
    shared_ptr_34bc0e86 _api;
}

+ (id)sec:(const struct GOGImageFeatureItem *)arg1 v:(const struct GOGVideoFeatureItem *)arg2;
+ (id)qr:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_34bc0e86 api; // @synthesize api=_api;
@property(nonatomic) _Bool ignorePdqhash; // @synthesize ignorePdqhash=_ignorePdqhash;
@property(nonatomic) _Bool ignorePhash; // @synthesize ignorePhash=_ignorePhash;
@property(nonatomic) _Bool ignoreFeatures; // @synthesize ignoreFeatures=_ignoreFeatures;
- (id)secv:(id)arg1 r:(id)arg2;
- (id)seci:(id)arg1;
- (id)init;

@end

