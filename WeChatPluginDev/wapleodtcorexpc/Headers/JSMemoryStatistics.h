//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMemoryLayout;

@interface JSMemoryStatistics : NSObject
{
    long long _offset;
    MMMemoryLayout *_extraMemory;
    MMMemoryLayout *_deprecatedExtraMemory;
    MMMemoryLayout *_arrayBuffers;
    MMMemoryLayout *_objectSpace;
}

+ (unsigned long long)heapCapacityForContext:(struct OpaqueJSContext *)arg1;
+ (id)memoryStatistics:(struct OpaqueJSContext *)arg1 callback:(CDUnknownFunctionPointerType)arg2;
+ (void)setJson:(id)arg1 forVersion:(unsigned long long)arg2;
+ (_Bool)isiPhone;
+ (void)setEnable:(_Bool)arg1;
+ (id)heapInfoWithJson:(id)arg1;
+ (id)heapJson;
+ (unsigned long long)sourceVersion;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMemoryLayout *objectSpace; // @synthesize objectSpace=_objectSpace;
@property(retain, nonatomic) MMMemoryLayout *arrayBuffers; // @synthesize arrayBuffers=_arrayBuffers;
@property(retain, nonatomic) MMMemoryLayout *deprecatedExtraMemory; // @synthesize deprecatedExtraMemory=_deprecatedExtraMemory;
@property(retain, nonatomic) MMMemoryLayout *extraMemory; // @synthesize extraMemory=_extraMemory;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (unsigned long long)heapCapacity;
- (unsigned long long)extraMemorySize;
- (void)setVM:(long long)arg1;
- (id)initWithDictionary:(id)arg1 vm:(struct OpaqueJSContextGroup *)arg2;

@end

