//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;
@protocol MMMusicLiveCommentLikeOperationHandler;

@interface MMMusicLiveCommentCommonViewModel : NSObject
{
    _Bool _isLiked;
    id <MMMusicLiveCommentLikeOperationHandler> _likeHandler;
    unsigned long long _likeCount;
    CDUnknownBlockType _likeOperationHandler;
    NSString *_mvPublisherName;
}

@property(retain, nonatomic) NSString *mvPublisherName; // @synthesize mvPublisherName=_mvPublisherName;
@property(copy, nonatomic) CDUnknownBlockType likeOperationHandler; // @synthesize likeOperationHandler=_likeOperationHandler;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) __weak id <MMMusicLiveCommentLikeOperationHandler> likeHandler; // @synthesize likeHandler=_likeHandler;
- (id)initWithMsg:(id)arg1;

@end
