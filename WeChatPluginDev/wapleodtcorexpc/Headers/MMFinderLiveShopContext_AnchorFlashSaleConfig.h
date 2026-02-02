//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWxAppInfo;

@interface MMFinderLiveShopContext_AnchorFlashSaleConfig : NSObject
{
    _Bool _enableShowFlashSale;
    _Bool _targetedFlashSaleEnable;
    _Bool _publicFlashSaleEnable;
    _Bool _flashSaleFirstOpenFlag;
    _Bool _historyEnable;
    FinderWxAppInfo *_sendPage;
    FinderWxAppInfo *_orderPage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool historyEnable; // @synthesize historyEnable=_historyEnable;
@property(nonatomic) _Bool flashSaleFirstOpenFlag; // @synthesize flashSaleFirstOpenFlag=_flashSaleFirstOpenFlag;
@property(nonatomic) _Bool publicFlashSaleEnable; // @synthesize publicFlashSaleEnable=_publicFlashSaleEnable;
@property(nonatomic) _Bool targetedFlashSaleEnable; // @synthesize targetedFlashSaleEnable=_targetedFlashSaleEnable;
@property(retain, nonatomic) FinderWxAppInfo *orderPage; // @synthesize orderPage=_orderPage;
@property(retain, nonatomic) FinderWxAppInfo *sendPage; // @synthesize sendPage=_sendPage;
@property(nonatomic) _Bool enableShowFlashSale; // @synthesize enableShowFlashSale=_enableShowFlashSale;
@property(readonly, nonatomic) _Bool shouldShowTargetedFlashSale;
@property(readonly, nonatomic) _Bool shouldShowPublicFlashSale;
@property(readonly, nonatomic) _Bool shouldShowOrderHistory;
@property(readonly, nonatomic) _Bool shouldShowSwitch;
- (void)updateWithConfigInfo:(id)arg1;
- (void)updateWithShopShelfInfo:(id)arg1;
- (id)init;

@end

