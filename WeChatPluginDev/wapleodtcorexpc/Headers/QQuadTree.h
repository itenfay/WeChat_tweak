//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QQuadTreeNode;

@interface QQuadTree : NSObject
{
    unsigned long long _bucketCapacity;
    QQuadTreeNode *_root;
    struct CGRect _boundingBox;
}

+ (id)treeWithDatas:(id)arg1;
+ (id)treeWithDatas:(id)arg1 box:(struct CGRect)arg2;
+ (id)treeWithDatas:(id)arg1 box:(struct CGRect)arg2 capacity:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) QQuadTreeNode *root; // @synthesize root=_root;
@property(nonatomic) unsigned long long bucketCapacity; // @synthesize bucketCapacity=_bucketCapacity;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (id)initWithDatas:(id)arg1 capacity:(unsigned long long)arg2 box:(struct CGRect)arg3;
- (id)dataInRange:(struct CGRect)arg1;
- (void)traverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDataInRange:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)insertData:(id)arg1;

@end

