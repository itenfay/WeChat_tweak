//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGift, MMLiveResourceFetcherFanoutFlowAction, MMLiveStorageCleanupPinningToken, NSMutableArray, NSString, UIColor;

@interface MMFinderLiveFansGroupCustomizableGiftColorVariant : NSObject
{
    _Bool _pagLoading;
    UIColor *_variantColor;
    NSString *_defaultTextAttachment;
    FinderLiveGift *_finderLiveGift;
    NSMutableArray *_pendingCallbacks;
    MMLiveResourceFetcherFanoutFlowAction *_resourceFetcher;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
    CDStruct_9e61a806 _portraitPreviewPag;
    CDStruct_9e61a806 _landscapePreviewPag;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *resourceFetcher; // @synthesize resourceFetcher=_resourceFetcher;
@property(retain, nonatomic) NSMutableArray *pendingCallbacks; // @synthesize pendingCallbacks=_pendingCallbacks;
@property(nonatomic) _Bool pagLoading; // @synthesize pagLoading=_pagLoading;
@property(nonatomic) CDStruct_9e61a806 landscapePreviewPag; // @synthesize landscapePreviewPag=_landscapePreviewPag;
@property(nonatomic) CDStruct_9e61a806 portraitPreviewPag; // @synthesize portraitPreviewPag=_portraitPreviewPag;
@property(retain, nonatomic) FinderLiveGift *finderLiveGift; // @synthesize finderLiveGift=_finderLiveGift;
@property(retain, nonatomic) NSString *defaultTextAttachment; // @synthesize defaultTextAttachment=_defaultTextAttachment;
@property(retain, nonatomic) UIColor *variantColor; // @synthesize variantColor=_variantColor;
- (void)getPagAnimationWithCompleteBlockImpl:(CDUnknownBlockType)arg1;
- (void)getPagAnimationWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)preloadPagAnimation;
@property(readonly, nonatomic) NSString *thumbnail;
@property(readonly, nonatomic) NSString *variantProductId;
- (id)initWithFinderLiveGift:(id)arg1;

@end

