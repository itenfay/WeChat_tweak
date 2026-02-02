//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FinderProfileReportParams : NSObject
{
    NSDictionary *_params;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithParams:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (id)toList;

@end

