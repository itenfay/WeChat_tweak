//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveStorageFileReferenceCounterItem : NSObject
{
    unsigned long long _count;
    unsigned long long _size;
}

@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;

@end

