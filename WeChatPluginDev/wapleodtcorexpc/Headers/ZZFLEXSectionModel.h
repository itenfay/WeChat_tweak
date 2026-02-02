//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIColor, ZZFLEXViewModel;

@interface ZZFLEXSectionModel : NSObject
{
    long long _sectionTag;
    UIColor *_backgroundColor;
    ZZFLEXViewModel *_headerViewModel;
    ZZFLEXViewModel *_footerViewModel;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    NSMutableArray *_itemsArray;
    struct UIEdgeInsets _sectionInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(retain, nonatomic) ZZFLEXViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(retain, nonatomic) ZZFLEXViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long sectionTag; // @synthesize sectionTag=_sectionTag;
- (id)dataModelAtIndex:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) struct CGSize footerViewSize;
@property(readonly, nonatomic) struct CGSize headerViewSize;
- (id)init;

@end

