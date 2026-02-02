//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet;

@interface QMUClusterAnnotation
{
    NSMutableSet *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long count;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

