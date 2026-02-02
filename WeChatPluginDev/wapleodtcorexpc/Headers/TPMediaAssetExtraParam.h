//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TPMediaAssetExtraParam : NSObject
{
    NSMutableDictionary *_objectMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *objectMap; // @synthesize objectMap=_objectMap;
- (id)objectValueForKey:(id)arg1;
- (void)setExtraObjectValue:(id)arg1 forKey:(id)arg2;
- (id)stringValueForKey:(id)arg1;
- (void)setExtraStringValue:(id)arg1 forKey:(id)arg2;
- (long long)intValueForKey:(id)arg1;
- (void)setExtraIntValue:(long long)arg1 forKey:(id)arg2;
- (id)init;

@end

