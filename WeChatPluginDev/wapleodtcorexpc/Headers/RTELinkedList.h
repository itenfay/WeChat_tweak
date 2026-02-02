//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RTEAttributeNode, RTELinkedListNode;

@interface RTELinkedList
{
    RTELinkedListNode *_headNode;
    RTELinkedListNode *_cacheNode;
    unsigned long long _cacheLocation;
    unsigned long long _totalLength;
}

+ (id)creatEmptyList:(unsigned int)arg1 Length:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) unsigned long long cacheLocation; // @synthesize cacheLocation=_cacheLocation;
@property(nonatomic) __weak RTELinkedListNode *cacheNode; // @synthesize cacheNode=_cacheNode;
@property(retain, nonatomic) RTELinkedListNode *headNode; // @synthesize headNode=_headNode;
- (void)mergeNodesStartFrom:(id)arg1 isForward:(_Bool)arg2;
- (id)copyListInRange:(struct _NSRange)arg1;
- (void)appendNodes:(id)arg1 ofLength:(unsigned long long)arg2;
- (void)insertNodes:(id)arg1 ofLength:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)deleteNodesAtRange:(struct _NSRange)arg1;
- (void)updateCacheToIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)getAfterAttributeNodeWithType:(unsigned int)arg1 SinceIndex:(unsigned long long)arg2;
- (id)getFrontAttributeNodeWithType:(unsigned int)arg1 SinceIndex:(unsigned long long)arg2;
- (id)description;
@property(nonatomic) unsigned int type;
@property(nonatomic) __weak RTEAttributeNode *cacheAttributeNode;
@property(retain, nonatomic) RTEAttributeNode *headAttributeNode;
- (_Bool)canSetHeadIndexToOrderListNode:(id)arg1;
- (_Bool)containNodeMatch:(CDUnknownBlockType)arg1 InRange:(struct _NSRange)arg2;
- (void)resetIndexAtRange:(struct _NSRange)arg1;
- (_Bool)updateListIndexSinceHeadNode:(id)arg1 withLocation:(unsigned long long)arg2 withTotalLength:(unsigned long long)arg3;

@end

