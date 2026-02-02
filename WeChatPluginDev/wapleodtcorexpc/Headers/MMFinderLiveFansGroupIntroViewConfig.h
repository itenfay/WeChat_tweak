//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFansGroupIntroViewColorConfig, NSArray, NSString;

@interface MMFinderLiveFansGroupIntroViewConfig : NSObject
{
    _Bool _isFree;
    NSString *_iconSvgImgName;
    NSString *_iconHighlightSvgImgName;
    NSString *_title;
    NSString *_price;
    NSString *_pricePeriod;
    NSArray *_rights;
    MMFinderLiveFansGroupIntroViewColorConfig *_colorConfig;
    struct CGSize _iconImageRatio;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupIntroViewColorConfig *colorConfig; // @synthesize colorConfig=_colorConfig;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(retain, nonatomic) NSArray *rights; // @synthesize rights=_rights;
@property(retain, nonatomic) NSString *pricePeriod; // @synthesize pricePeriod=_pricePeriod;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconHighlightSvgImgName; // @synthesize iconHighlightSvgImgName=_iconHighlightSvgImgName;
@property(nonatomic) struct CGSize iconImageRatio; // @synthesize iconImageRatio=_iconImageRatio;
@property(retain, nonatomic) NSString *iconSvgImgName; // @synthesize iconSvgImgName=_iconSvgImgName;

@end

