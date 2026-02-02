//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJResourcePreloader : NSObject
{
    WeakPtr_55ba20e6 _backingPreloader;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) WeakPtr_55ba20e6 backingPreloader; // @synthesize backingPreloader=_backingPreloader;
- (void)updateExpectedResourceUsage:(id)arg1;
- (void)stopPreloading;
- (void)startPreloading;
- (void)setPreloadResourceSizeLimit:(long long)arg1;
- (void)setConcurrencyLimit:(long long)arg1;
- (id)initWithBackingPreloader:(const void *)arg1;
- (void)dealloc;

@end

