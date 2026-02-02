//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface NativeBizCreationInfo : NSObject
{
    NSNumber *_redPoint;
    NSString *_buffer;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithRedPoint:(id)arg1 buffer:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSNumber *redPoint; // @synthesize redPoint=_redPoint;
- (id)toList;

@end

