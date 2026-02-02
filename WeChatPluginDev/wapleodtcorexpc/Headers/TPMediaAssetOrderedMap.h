//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableString;

@interface TPMediaAssetOrderedMap
{
    NSMutableString *_orderedMap;
}

@property(copy, nonatomic) NSMutableString *orderedMap; // @synthesize orderedMap=_orderedMap;
- (id)stringValue;
- (void)addStringValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

