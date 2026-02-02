//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ZZFLEXAngelViewBatchInsertChainModel
{
    long long _status;
    long long _insertTag;
}

@property(nonatomic) long long insertTag; // @synthesize insertTag=_insertTag;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)p_tryInsertCells;
- (CDUnknownBlockType)afterCell;
- (CDUnknownBlockType)beforeCell;
- (CDUnknownBlockType)toIndex;
- (CDUnknownBlockType)toSection;
- (CDUnknownBlockType)withDataModelArray;

@end

