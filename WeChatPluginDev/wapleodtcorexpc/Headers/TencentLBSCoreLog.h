//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface TencentLBSCoreLog : NSObject
{
    CDUnknownBlockType _innerCoreLogBlock;
    NSDateFormatter *_dateFormtter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormtter; // @synthesize dateFormtter=_dateFormtter;
@property(copy, nonatomic) CDUnknownBlockType innerCoreLogBlock; // @synthesize innerCoreLogBlock=_innerCoreLogBlock;
- (void)printwithTag:(id)arg1 withDate:(id)arg2 withLog:(id)arg3;
- (id)init;

@end

