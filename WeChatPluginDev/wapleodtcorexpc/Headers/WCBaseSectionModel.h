//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCBaseSectionModel : NSObject
{
    NSString *_sectionId;
    NSString *_sectionTitle;
    NSMutableArray *_allCellModelList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allCellModelList; // @synthesize allCellModelList=_allCellModelList;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (_Bool)removeCellModelAtRow:(long long)arg1;
- (_Bool)insertCellModel:(id)arg1 atRow:(long long)arg2;
- (_Bool)addCellModel:(id)arg1;
- (void)setCellModelList:(id)arg1;
- (_Bool)contains:(id)arg1 forComparator:(CDUnknownBlockType)arg2;
- (_Bool)contains:(id)arg1;
- (void)enumerateCellModel:(CDUnknownBlockType)arg1;
- (long long)cellCount;
- (long long)rowOfCellModel:(id)arg1;
- (id)cellModelAtRow:(long long)arg1;
- (id)initWithId:(id)arg1 sectionTitle:(id)arg2;

@end

