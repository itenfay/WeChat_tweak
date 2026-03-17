//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DataMatrix : NSObject
{
    int dim;
    _Bool **data;
}

- (void)dealloc;
- (id)toString;
- (_Bool)valueAt:(int)arg1 y:(int)arg2;
- (void)set:(_Bool)arg1 x:(int)arg2 y:(int)arg3;
- (int)dimension;
- (id)initWith:(int)arg1;

@end

