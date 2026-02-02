//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAverageNumber : NSObject
{
    int _numValue;
    double _total;
}

@property(nonatomic) double total; // @synthesize total=_total;
@property(nonatomic) int numValue; // @synthesize numValue=_numValue;
- (id)description;
- (void)addOneNumber:(id)arg1;

@end

