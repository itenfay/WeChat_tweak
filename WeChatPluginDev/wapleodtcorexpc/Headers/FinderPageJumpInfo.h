//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FinderPageJumpInfo : NSObject
{
    NSNumber *_finderUin;
    NSString *_finderUsername;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinderUin:(id)arg1 finderUsername:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSNumber *finderUin; // @synthesize finderUin=_finderUin;
- (id)toList;

@end

