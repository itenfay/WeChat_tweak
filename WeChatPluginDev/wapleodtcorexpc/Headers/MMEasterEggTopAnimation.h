//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggTopAnimation : NSObject
{
    NSString *_pagPath;
    double _blockDuration;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) double blockDuration; // @synthesize blockDuration=_blockDuration;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *pagPath; // @synthesize pagPath=_pagPath;
- (id)description;
- (_Bool)isValid;
- (id)init;

@end

