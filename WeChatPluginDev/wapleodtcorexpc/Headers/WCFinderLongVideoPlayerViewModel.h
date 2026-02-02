//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol WCFinderLongVideoPlayerViewModelDelegate;

@interface WCFinderLongVideoPlayerViewModel : NSObject
{
    _Bool _hadMoreRecommend;
    _Bool _isRecommendRequesting;
    id <WCFinderLongVideoPlayerViewModelDelegate> _delegate;
    NSString *_videoId;
    NSString *_videoNonceId;
    NSString *_encryptedVideoId;
    NSString *_fromUserName;
    NSString *_toUserName;
    NSData *_lastRecommendBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecommendRequesting; // @synthesize isRecommendRequesting=_isRecommendRequesting;
@property(retain, nonatomic) NSData *lastRecommendBuffer; // @synthesize lastRecommendBuffer=_lastRecommendBuffer;
@property(nonatomic) _Bool hadMoreRecommend; // @synthesize hadMoreRecommend=_hadMoreRecommend;
@property(copy, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;
@property(copy, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(copy, nonatomic) NSString *encryptedVideoId; // @synthesize encryptedVideoId=_encryptedVideoId;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak id <WCFinderLongVideoPlayerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)contentVMForDataItem:(id)arg1;
- (id)contentVMByMegaVideoId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3;
- (int)relatedScene;
- (id)init;

@end

