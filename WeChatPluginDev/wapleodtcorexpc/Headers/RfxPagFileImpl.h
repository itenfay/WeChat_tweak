//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RfxPagFileImpl : NSObject
{
    shared_ptr_fff0cd15 _pagFile;
}

+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)Load:(id)arg1;
+ (id)ToPagFile:(shared_ptr_fff0cd15)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyOriginal;
- (void)resetTextForAllTextLayersWithName:(id)arg1;
- (void)setText:(id)arg1 forAllTextLayersWithName:(id)arg2;
- (long long)height;
- (long long)width;
- (long long)duration;
@property(nonatomic) shared_ptr_fff0cd15 pagFile;
- (id)initWithPagFile:(shared_ptr_fff0cd15)arg1;

@end

