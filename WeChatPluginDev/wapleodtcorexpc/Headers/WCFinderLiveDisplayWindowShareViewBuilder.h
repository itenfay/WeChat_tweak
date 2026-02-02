//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebImageView, WCFinderLiveDisplayWindowShareViewBuildConfig, WCFinderLiveShopWindowShareItem;

@interface WCFinderLiveDisplayWindowShareViewBuilder : NSObject
{
    _Bool _isRecordDetail;
    WCFinderLiveDisplayWindowShareViewBuildConfig *_config;
    WCFinderLiveShopWindowShareItem *_localItem;
    WCFinderLiveShopWindowShareItem *_remoteItem;
    MMWebImageView *_appLogoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
@property(nonatomic) _Bool isRecordDetail; // @synthesize isRecordDetail=_isRecordDetail;
@property(retain, nonatomic) WCFinderLiveShopWindowShareItem *remoteItem; // @synthesize remoteItem=_remoteItem;
@property(retain, nonatomic) WCFinderLiveShopWindowShareItem *localItem; // @synthesize localItem=_localItem;
@property(retain, nonatomic) WCFinderLiveDisplayWindowShareViewBuildConfig *config; // @synthesize config=_config;
- (double)estimateHeightForWidth:(double)arg1;
- (double)buildInCanvas:(id)arg1;
- (double)buildInCanvasForWxShop:(id)arg1;
- (void)updateAppLogo;
- (unsigned long long)validProductCount;
- (id)productImageURLList;
- (_Bool)hasWxShopBackgroundImage;
- (_Bool)isWxShop;
@property(readonly, nonatomic) WCFinderLiveShopWindowShareItem *item;

@end

