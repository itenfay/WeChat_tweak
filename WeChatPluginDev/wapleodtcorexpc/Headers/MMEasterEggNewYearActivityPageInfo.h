//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggNewYearActivityPageInfo : NSObject
{
    unsigned long long _canvasPageId;
    NSString *_canvasPageXML;
    NSString *_weAppUserName;
    NSString *_weAppPagePath;
    NSString *_h5URL;
    NSString *_couponAppId;
    NSString *_couponStockId;
    NSString *_finderUsername;
    NSString *_finderFeedId;
    NSString *_finderNonceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderNonceId; // @synthesize finderNonceId=_finderNonceId;
@property(retain, nonatomic) NSString *finderFeedId; // @synthesize finderFeedId=_finderFeedId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *couponStockId; // @synthesize couponStockId=_couponStockId;
@property(retain, nonatomic) NSString *couponAppId; // @synthesize couponAppId=_couponAppId;
@property(retain, nonatomic) NSString *h5URL; // @synthesize h5URL=_h5URL;
@property(retain, nonatomic) NSString *weAppPagePath; // @synthesize weAppPagePath=_weAppPagePath;
@property(retain, nonatomic) NSString *weAppUserName; // @synthesize weAppUserName=_weAppUserName;
@property(retain, nonatomic) NSString *canvasPageXML; // @synthesize canvasPageXML=_canvasPageXML;
@property(nonatomic) unsigned long long canvasPageId; // @synthesize canvasPageId=_canvasPageId;
- (_Bool)isValidWithPageType:(unsigned long long)arg1;
- (id)initWithMaterialPageInfo:(id)arg1;

@end

