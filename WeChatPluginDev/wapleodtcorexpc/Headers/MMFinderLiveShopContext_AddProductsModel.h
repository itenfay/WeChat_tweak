//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWxAppInfo;

@interface MMFinderLiveShopContext_AddProductsModel : NSObject
{
    unsigned long long _openType;
    FinderWxAppInfo *_shopAssistApp;
    FinderWxAppInfo *_selectionCenterHomePage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderWxAppInfo *selectionCenterHomePage; // @synthesize selectionCenterHomePage=_selectionCenterHomePage;
@property(retain, nonatomic) FinderWxAppInfo *shopAssistApp; // @synthesize shopAssistApp=_shopAssistApp;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
- (void)updateWithShopShelfInfo:(id)arg1;

@end

