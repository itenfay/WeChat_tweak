//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RfxPagFile : NSObject
{
    id _impl;
}

+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)Load:(id)arg1;
- (id)copyOriginal;
- (void)resetTextForAllTextLayersWithName:(id)arg1;
- (void)setText:(id)arg1 forAllTextLayersWithName:(id)arg2;
- (long long)height;
- (long long)width;
- (long long)duration;
- (void)dealloc;
- (id)impl;
- (id)initWithImpl:(id)arg1;

@end

