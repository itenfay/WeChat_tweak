//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCBaseDataSource : NSObject
{
    NSMutableArray *_allSectionModelList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allSectionModelList; // @synthesize allSectionModelList=_allSectionModelList;
- (id)findSectionModelById:(id)arg1;
- (id)ensureSectionModelByIndex:(long long)arg1 withId:(id)arg2 title:(id)arg3;
- (id)description;
- (id)describeCount;
- (void)clear;
- (id)removeSectionOfId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)concatDataSourceFrom:(id)arg1;
- (_Bool)insertCellModel:(id)arg1 atRow:(long long)arg2 toSectionOfId:(id)arg3 title:(id)arg4;
- (_Bool)insertCellModel:(id)arg1 atRow:(long long)arg2 toSectionAtIndex:(long long)arg3 createWithId:(id)arg4 title:(id)arg5;
- (_Bool)addCellModel:(id)arg1 toSectionOfId:(id)arg2 createWithTitle:(id)arg3;
- (_Bool)addCellModel:(id)arg1 toSectionAtIndex:(long long)arg2 createWithId:(id)arg3 title:(id)arg4;
- (void)setSectionModelList:(id)arg1;
- (id)ensureSectionModelById:(id)arg1 withTitle:(id)arg2;
- (_Bool)safeInsertSectionModel:(id)arg1 toIndex:(long long)arg2;
- (_Bool)addSectionModel:(id)arg1;
- (_Bool)contains:(id)arg1 forComparator:(CDUnknownBlockType)arg2;
- (_Bool)contains:(id)arg1;
- (void)enumerateCellModel:(CDUnknownBlockType)arg1;
- (long long)cellCountByIndexPath:(id)arg1;
- (long long)cellCount;
- (long long)sectionCount;
- (id)indexPathOfCellModel:(id)arg1;
- (id)cellModelAtIndex:(id)arg1;
- (long long)indexOfSectionModel:(id)arg1;
- (long long)indexOfSectionModelForId:(id)arg1;
- (id)sectionModelOfId:(id)arg1;
- (id)sectionModelAtIndex:(long long)arg1;
- (id)initWithSectionModel:(id)arg1;

@end

