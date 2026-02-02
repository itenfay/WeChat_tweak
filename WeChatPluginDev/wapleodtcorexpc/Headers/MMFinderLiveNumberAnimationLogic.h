//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNumericAnimationRuleInfo, NSPointerArray;

@interface MMFinderLiveNumberAnimationLogic : NSObject
{
    _Bool _hasStarted;
    _Bool _hasFinished;
    unsigned long long _productID;
    FinderLiveNumericAnimationRuleInfo *_ruleInfo;
    unsigned long long _currentNumber;
    NSPointerArray *_observers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long currentNumber; // @synthesize currentNumber=_currentNumber;
@property(retain, nonatomic) FinderLiveNumericAnimationRuleInfo *ruleInfo; // @synthesize ruleInfo=_ruleInfo;
@property(nonatomic) unsigned long long productID; // @synthesize productID=_productID;
- (void)addObserver:(id)arg1;
- (_Bool)start;
- (id)initWithLocalValue:(unsigned long long)arg1 ruleInfo:(id)arg2 ForProductID:(unsigned long long)arg3;

@end

