//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCFinderLiveCardProductShowcase : NSObject
{
    _Bool _needRefresh;
    NSArray *_productInfos;
}

+ (id)finderLiveCardProductShowcaseFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) NSArray *productInfos; // @synthesize productInfos=_productInfos;
- (id)toFinderLiveCardProductShowcase;

@end

