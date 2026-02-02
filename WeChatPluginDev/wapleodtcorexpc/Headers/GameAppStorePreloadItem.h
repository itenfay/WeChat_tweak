//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameAppStoreReportInfo, NSString, SKStoreProductViewController;

@interface GameAppStorePreloadItem : NSObject
{
    _Bool _preloadLoadFailed;
    _Bool _isPreload;
    SKStoreProductViewController *_preloadProdctVc;
    NSString *_preloadProductId;
    GameAppStoreReportInfo *_reportInfo;
    double _startLoadTime;
    double _loadCompleteTime;
}

- (void).cxx_destruct;
@property(nonatomic) double loadCompleteTime; // @synthesize loadCompleteTime=_loadCompleteTime;
@property(nonatomic) double startLoadTime; // @synthesize startLoadTime=_startLoadTime;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(retain, nonatomic) GameAppStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) _Bool preloadLoadFailed; // @synthesize preloadLoadFailed=_preloadLoadFailed;
@property(retain, nonatomic) NSString *preloadProductId; // @synthesize preloadProductId=_preloadProductId;
@property(retain, nonatomic) SKStoreProductViewController *preloadProdctVc; // @synthesize preloadProdctVc=_preloadProdctVc;
- (id)description;
- (id)init;

@end

