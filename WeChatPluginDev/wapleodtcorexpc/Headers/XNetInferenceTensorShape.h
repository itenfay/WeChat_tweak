//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface XNetInferenceTensorShape : NSObject
{
    struct TensorShape _underlying;
}

- (id).cxx_construct;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectAtIndexedSubscript:(long long)arg1;
@property(readonly, nonatomic) long long length;
@property(readonly, nonatomic) long long dimension;
@property(readonly, nonatomic) NSArray *data;
- (id)initWithData:(id)arg1;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

