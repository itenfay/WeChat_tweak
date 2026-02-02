//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WVMDummyObject : NSObject
{
    struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> objcInfo;
    int _count;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int count; // @synthesize count=_count;

@end

