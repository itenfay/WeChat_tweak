//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterExptRequest : NSObject
{
    NSString *_key;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithKey:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)toList;

@end

