//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, WCFinderFeedContentVM, WCFinderLiveStreamElementModel;
@protocol WCFinderLiveFeedGenericPageContextBase, WCFinderLiveGenericFeedVMDelegate;

@interface WCFinderLiveGenericFeedVM : NSObject
{
    _Bool _isSkeleton;
    int _scene;
    WCFinderLiveStreamElementModel *_model;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _containerId;
    id <WCFinderLiveGenericFeedVMDelegate> _delegate;
    id <WCFinderLiveFeedGenericPageContextBase> _ctx;
    UIColor *_mainColor;
}

+ (id)getUrlHashForKey:(id)arg1;
+ (Class)concreteFeedVMClassWithModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(nonatomic) _Bool isSkeleton; // @synthesize isSkeleton=_isSkeleton;
@property(retain, nonatomic) id <WCFinderLiveFeedGenericPageContextBase> ctx; // @synthesize ctx=_ctx;
@property(nonatomic) __weak id <WCFinderLiveGenericFeedVMDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderLiveStreamElementModel *model; // @synthesize model=_model;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onAggregationCardUpdate:(id)arg1;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
@property(readonly, nonatomic) _Bool isAutoPlaying;
@property(readonly, nonatomic) NSString *sessionBuffer;
- (void)saveMainColor:(id)arg1;
- (void)checkShouldPresentLiveConcertTicketWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reserveLiveNoticeForUser:(int)arg1;
- (_Bool)isNoticeAuthor;
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

