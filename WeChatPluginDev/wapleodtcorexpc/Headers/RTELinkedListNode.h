//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface RTELinkedListNode
{
    unsigned long long _length;
    RTELinkedListNode *_nextNode;
    RTELinkedListNode *_preNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTELinkedListNode *preNode; // @synthesize preNode=_preNode;
@property(retain, nonatomic) RTELinkedListNode *nextNode; // @synthesize nextNode=_nextNode;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (_Bool)canBeMergedInto:(id)arg1;
- (void)clearNode;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

