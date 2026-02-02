//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewMpInfoModelVideoInfo, NSString;

@interface MMWebViewMpInfoModel : NSObject
{
    _Bool _hasItemShowType;
    _Bool _isPaySubcribe;
    _Bool _isTopBarShow;
    _Bool _showSourceInfo;
    _Bool _enableReadArticle;
    _Bool _disableShowFinderLiveTopBar;
    _Bool _hasFinderElement;
    _Bool _isShowMenuBrandInfo;
    _Bool _isDisableMenuHeader;
    unsigned int _msgId;
    unsigned int _itemIdx;
    unsigned int _itemShowType;
    NSString *_brandIconUrl;
    NSString *_brandName;
    NSString *_brandUserName;
    NSString *_pageTitle;
    NSString *_pageCover;
    NSString *_pageCustomSnapShotBase64Str;
    NSString *_bizId;
    MMWebViewMpInfoModelVideoInfo *_videoInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisableMenuHeader; // @synthesize isDisableMenuHeader=_isDisableMenuHeader;
@property(nonatomic) _Bool isShowMenuBrandInfo; // @synthesize isShowMenuBrandInfo=_isShowMenuBrandInfo;
@property(nonatomic) _Bool hasFinderElement; // @synthesize hasFinderElement=_hasFinderElement;
@property(retain, nonatomic) MMWebViewMpInfoModelVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool disableShowFinderLiveTopBar; // @synthesize disableShowFinderLiveTopBar=_disableShowFinderLiveTopBar;
@property(nonatomic) _Bool enableReadArticle; // @synthesize enableReadArticle=_enableReadArticle;
@property(nonatomic) _Bool showSourceInfo; // @synthesize showSourceInfo=_showSourceInfo;
@property(nonatomic) _Bool isTopBarShow; // @synthesize isTopBarShow=_isTopBarShow;
@property(nonatomic) _Bool isPaySubcribe; // @synthesize isPaySubcribe=_isPaySubcribe;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(nonatomic) unsigned int itemIdx; // @synthesize itemIdx=_itemIdx;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *pageCustomSnapShotBase64Str; // @synthesize pageCustomSnapShotBase64Str=_pageCustomSnapShotBase64Str;
@property(copy, nonatomic) NSString *pageCover; // @synthesize pageCover=_pageCover;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
- (_Bool)isUsePageCoverInHistoryRec;
- (_Bool)isMenuItemNeedHiddenInMpPage:(id)arg1;
- (id)mpPageCommonId;
- (_Bool)isProfileModelDataValid;

@end

