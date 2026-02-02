//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWindowProductInfo, FinderWindowProductInfo_DetailPage, MMFinderLiveGoodsItem, MMFinderLiveOpenProductPageAspect, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveOpenProductPageParam : NSObject
{
    _Bool _isSheetMode;
    _Bool _usePushAnimationForFinderMiniShopPurchasePage;
    _Bool _usePushAnimation;
    _Bool _isAnchorOrAssistant;
    FinderWindowProductInfo *_product;
    MMFinderLiveGoodsItem *_goods;
    FinderWindowProductInfo_DetailPage *_page;
    MMFinderLiveTaskId *_taskID;
    unsigned long long _type;
    NSString *_entranceGMsgID;
    NSString *_liveScene;
    NSString *_sceneNote;
    CDUnknownBlockType _nativeProductShare;
    MMFinderLiveOpenProductPageAspect *_aspect;
}

+ (id)paramWithProduct:(id)arg1 type:(unsigned long long)arg2;
+ (id)paramWithProduct:(id)arg1;
+ (id)param;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveOpenProductPageAspect *aspect; // @synthesize aspect=_aspect;
@property(copy, nonatomic) CDUnknownBlockType nativeProductShare; // @synthesize nativeProductShare=_nativeProductShare;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(copy, nonatomic) NSString *liveScene; // @synthesize liveScene=_liveScene;
@property(copy, nonatomic) NSString *entranceGMsgID; // @synthesize entranceGMsgID=_entranceGMsgID;
@property(nonatomic) _Bool isAnchorOrAssistant; // @synthesize isAnchorOrAssistant=_isAnchorOrAssistant;
@property(nonatomic) _Bool usePushAnimation; // @synthesize usePushAnimation=_usePushAnimation;
@property(nonatomic) _Bool usePushAnimationForFinderMiniShopPurchasePage; // @synthesize usePushAnimationForFinderMiniShopPurchasePage=_usePushAnimationForFinderMiniShopPurchasePage;
@property(nonatomic) _Bool isSheetMode; // @synthesize isSheetMode=_isSheetMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *page; // @synthesize page=_page;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goods; // @synthesize goods=_goods;
@property(retain, nonatomic) FinderWindowProductInfo *product; // @synthesize product=_product;

@end

