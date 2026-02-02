//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UICollectionView;

@interface GCCollectionViewManagerConfig : NSObject
{
    _Bool _supportLongPress;
    UICollectionView *_collectionView;
    CDUnknownBlockType _refreshBlock;
    double _customPageSize;
}

- (void).cxx_destruct;
@property(nonatomic) double customPageSize; // @synthesize customPageSize=_customPageSize;
@property(nonatomic) _Bool supportLongPress; // @synthesize supportLongPress=_supportLongPress;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;

@end

