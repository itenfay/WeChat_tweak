//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol MMMusicLiveCommentModelDelegate;

@interface MMMusicLiveCommentModel : NSObject
{
    struct map<unsigned long long, double, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, double>>> m_heightCache;
    id <MMMusicLiveCommentModelDelegate> _delegate;
    NSMutableSet *_existedComment;
    NSMutableArray *_commentArray;
    NSMutableArray *_noticeQueue;
}

+ (id)cellIdentifier;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *noticeQueue; // @synthesize noticeQueue=_noticeQueue;
@property(retain, nonatomic) NSMutableArray *commentArray; // @synthesize commentArray=_commentArray;
@property(retain, nonatomic) NSMutableSet *existedComment; // @synthesize existedComment=_existedComment;
@property(nonatomic) __weak id <MMMusicLiveCommentModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addNotice:(id)arg1;
- (void)appendComment:(id)arg1;
- (void)clearHeightCacheFor:(id)arg1;
- (void)clearHeightCache;
- (double)heightForCellAt:(unsigned long long)arg1;
- (void)removeFirstNotice;
- (id)firstNotice;
@property(readonly, nonatomic) long long noticeCount;
- (id)viewModelAt:(unsigned long long)arg1;
@property(readonly, nonatomic) long long commentCount;
- (void)viewModelDidUpdated:(id)arg1;
- (void)calculateAndCacheHeightFor:(id)arg1;
- (id)init;

@end

