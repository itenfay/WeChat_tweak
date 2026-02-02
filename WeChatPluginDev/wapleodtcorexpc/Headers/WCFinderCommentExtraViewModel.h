//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, NSString, ProductCommentInfo, WAAppOpenParameter, WCFinderKeywordComponent;
@protocol WCFinderCommentExtraViewModelDelegate;

@interface WCFinderCommentExtraViewModel : NSObject
{
    _Bool _topLinkExposed;
    int _scene;
    int _sourceScene;
    id <WCFinderCommentExtraViewModelDelegate> _delegate;
    NSString *_enterSessionId;
    NSString *_topLinkText;
    FinderJumpInfo *_linkJumpInfo;
    unsigned long long _requestId;
    ProductCommentInfo *_shopInfo;
    WAAppOpenParameter *_shopCommentInfoParam;
    unsigned long long _shopCommentCount;
    long long _productInfoSource;
    NSString *_tid;
    WCFinderKeywordComponent *_keyword;
}

- (void).cxx_destruct;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) WCFinderKeywordComponent *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) long long productInfoSource; // @synthesize productInfoSource=_productInfoSource;
@property(nonatomic) unsigned long long shopCommentCount; // @synthesize shopCommentCount=_shopCommentCount;
@property(retain, nonatomic) WAAppOpenParameter *shopCommentInfoParam; // @synthesize shopCommentInfoParam=_shopCommentInfoParam;
@property(retain, nonatomic) ProductCommentInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) FinderJumpInfo *linkJumpInfo; // @synthesize linkJumpInfo=_linkJumpInfo;
@property(nonatomic) _Bool topLinkExposed; // @synthesize topLinkExposed=_topLinkExposed;
@property(retain, nonatomic) NSString *topLinkText; // @synthesize topLinkText=_topLinkText;
@property(retain, nonatomic) NSString *enterSessionId; // @synthesize enterSessionId=_enterSessionId;
@property(nonatomic) __weak id <WCFinderCommentExtraViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleLinkTips:(id)arg1;
- (void)startRequest;
- (struct WCFinderKeywordAction)topLinkActionForUrl:(id)arg1;
- (void)regenEnterSessionId;
- (id)initWithTid:(id)arg1 scene:(int)arg2 sourceScene:(int)arg3;

@end

