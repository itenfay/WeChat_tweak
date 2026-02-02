//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimeStepLog : NSObject
{
    double _begin;
    NSString *_prefix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) double begin; // @synthesize begin=_begin;
- (double)showTimeStep:(id)arg1;
- (id)initWithPrefix:(id)arg1;

@end

