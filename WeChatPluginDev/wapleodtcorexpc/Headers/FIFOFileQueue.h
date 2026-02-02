//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface FIFOFileQueue
{
    NSMutableArray *m_arrItems;
}

- (void).cxx_destruct;
- (_Bool)syncData;
- (id)getItemAtIndex:(unsigned long long)arg1;
- (_Bool)removeItems:(id)arg1;
- (_Bool)removeItemAtIndex:(unsigned long long)arg1;
- (id)description;
- (_Bool)clear;
- (id)getAll;
- (id)getTop;
- (_Bool)modifyTop:(id)arg1;
- (_Bool)pop;
- (_Bool)push:(id)arg1;
- (void)setUnArchiveResult:(id)arg1;
- (id)getArchiveTarget;
- (void)dealloc;

@end

