//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OMJTaskTrace : NSObject
{
    NSDictionary *_entriesByID;
    NSString *_name;
    shared_ptr_1988f396 _backingTrace;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_1988f396 backingTrace; // @synthesize backingTrace=_backingTrace;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)runningLeafEntries;
- (void)setupEntries;
- (id)initWithBackingTrace:(const void *)arg1;

@end

