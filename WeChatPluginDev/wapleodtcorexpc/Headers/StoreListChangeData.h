//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface StoreListChangeData : NSObject
{
    unsigned int _topHotNum;
    unsigned int _recentHotNum;
    NSArray *_cellSetList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int recentHotNum; // @synthesize recentHotNum=_recentHotNum;
@property(nonatomic) unsigned int topHotNum; // @synthesize topHotNum=_topHotNum;
@property(retain, nonatomic) NSArray *cellSetList; // @synthesize cellSetList=_cellSetList;

@end

