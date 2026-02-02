//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MMMusicLiveCommentLikeOperationHandler;

@interface MMMusicLiveCommentCommonViewModel
{
    _Bool _isLiked;
    id <MMMusicLiveCommentLikeOperationHandler> _likeHandler;
    unsigned long long _likeCount;
    CDUnknownBlockType _likeOperationHandler;
    NSString *_mvPublisherName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mvPublisherName; // @synthesize mvPublisherName=_mvPublisherName;
@property(copy, nonatomic) CDUnknownBlockType likeOperationHandler; // @synthesize likeOperationHandler=_likeOperationHandler;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) __weak id <MMMusicLiveCommentLikeOperationHandler> likeHandler; // @synthesize likeHandler=_likeHandler;
- (id)initWithMsg:(id)arg1;

@end

