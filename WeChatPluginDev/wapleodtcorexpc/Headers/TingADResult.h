//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TingADResult : NSObject
{
    NSNumber *_errorCode;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithErrorCode:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
- (id)toList;

@end

