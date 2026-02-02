//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MMLiveCommentDataDictCache : NSObject
{
    NSMutableDictionary *_commentDataItemDict;
    NSMutableSet *_invalidComments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *invalidComments; // @synthesize invalidComments=_invalidComments;
@property(retain, nonatomic) NSMutableDictionary *commentDataItemDict; // @synthesize commentDataItemDict=_commentDataItemDict;
- (unsigned long long)getCommentDataItemCount;
- (id)getCommentDataItemWithLocalCliMsgId:(id)arg1;
- (id)getCommentDataItemWithSeq:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCommentSeqByOwnSeq;
- (_Bool)updateCommentSeq:(unsigned long long)arg1 withLocalClientMsgId:(id)arg2;
- (void)clearCommentDataItemCache:(id)arg1;
- (void)clearAllCommentDataItemCache;
- (void)cacheCommentDataItems:(id)arg1;

@end

