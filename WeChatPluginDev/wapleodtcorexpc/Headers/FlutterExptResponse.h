//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterExptResponse : NSObject
{
    NSString *_result;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithResult:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
- (id)toList;

@end

