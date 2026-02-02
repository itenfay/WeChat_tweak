//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCStackFeatPool : NSObject
{
    NSMutableDictionary *_stackFeatDict;
    double _featStackTime;
}

- (void).cxx_destruct;
@property(nonatomic) double featStackTime; // @synthesize featStackTime=_featStackTime;
@property(retain, nonatomic) NSMutableDictionary *stackFeatDict; // @synthesize stackFeatDict=_stackFeatDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)addStackFeat:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

