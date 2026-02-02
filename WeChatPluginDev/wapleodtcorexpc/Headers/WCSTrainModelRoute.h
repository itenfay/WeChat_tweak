//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSTrainModelRoute : NSObject
{
    _Bool _isLeaf;
    _Bool _isExtBooster;
    NSString *_key;
    unsigned long long _eCond;
    NSString *_nsCondSuffix;
    unsigned long long _oper;
    double _value;
    NSString *_trueKey;
    NSString *_falseKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExtBooster; // @synthesize isExtBooster=_isExtBooster;
@property(retain, nonatomic) NSString *falseKey; // @synthesize falseKey=_falseKey;
@property(retain, nonatomic) NSString *trueKey; // @synthesize trueKey=_trueKey;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) unsigned long long oper; // @synthesize oper=_oper;
@property(retain, nonatomic) NSString *nsCondSuffix; // @synthesize nsCondSuffix=_nsCondSuffix;
@property(nonatomic) unsigned long long eCond; // @synthesize eCond=_eCond;
@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (int)binaryValueIfMatchCondSuffix:(id)arg1;
- (_Bool)parseCondByCond1:(id)arg1 cond2:(id)arg2;

@end

