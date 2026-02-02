//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface ZZFLEXAngelSectionEditChainModel
{
}

- (CDUnknownBlockType)updateAllCellsByTag;
- (CDUnknownBlockType)updateCellByDataModel;
- (CDUnknownBlockType)updateCellAtIndex;
- (CDUnknownBlockType)updateCellByTag;
- (CDUnknownBlockType)updateFooter;
- (CDUnknownBlockType)updateHeader;
- (CDUnknownBlockType)updateCells;
- (CDUnknownBlockType)updateItems;
- (CDUnknownBlockType)update;
- (CDUnknownBlockType)deleteCellByDataModel;
- (CDUnknownBlockType)deleteCellAtIndex;
- (CDUnknownBlockType)deleteAllCellsByTag;
- (CDUnknownBlockType)deleteCellByTag;
- (CDUnknownBlockType)deleteFooter;
- (CDUnknownBlockType)deleteHeader;
- (CDUnknownBlockType)clearCells;
- (CDUnknownBlockType)clearItems;
- (CDUnknownBlockType)clear;
@property(readonly, nonatomic) long long height;
- (CDUnknownBlockType)dataModelArrayByViewTag;
- (CDUnknownBlockType)dataModelByViewTag;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) id dataModelForFooter;
@property(readonly, nonatomic) id dataModelForHeader;
@property(readonly, nonatomic) NSArray *dataModelArray;

@end

