//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCommonCountModel : NSObject
{
    long long _currentCount;
    long long _targetCount;
}

@property(nonatomic) long long targetCount; // @synthesize targetCount=_targetCount;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
- (id)initWithCurrentCount:(long long)arg1 targetCount:(long long)arg2;

@end

