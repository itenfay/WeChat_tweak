//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SnsPoiDetail;

@interface WCFinderUserPoiInfo : NSObject
{
    SnsPoiDetail *_snsPoiDetail;
    NSString *_highlightName;
    NSString *_highlightAddress;
    NSString *_normalName;
    NSString *_normalAddress;
    NSString *_normalDetail;
    NSMutableArray *_highlightNameKeywords;
    NSMutableArray *_highlightAddressKeywords;
}

+ (id)finderPOIInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *highlightAddressKeywords; // @synthesize highlightAddressKeywords=_highlightAddressKeywords;
@property(retain, nonatomic) NSMutableArray *highlightNameKeywords; // @synthesize highlightNameKeywords=_highlightNameKeywords;
@property(copy, nonatomic) NSString *normalDetail; // @synthesize normalDetail=_normalDetail;
@property(copy, nonatomic) NSString *normalAddress; // @synthesize normalAddress=_normalAddress;
@property(copy, nonatomic) NSString *normalName; // @synthesize normalName=_normalName;
@property(copy, nonatomic) NSString *highlightAddress; // @synthesize highlightAddress=_highlightAddress;
@property(copy, nonatomic) NSString *highlightName; // @synthesize highlightName=_highlightName;
@property(retain, nonatomic) SnsPoiDetail *snsPoiDetail; // @synthesize snsPoiDetail=_snsPoiDetail;
- (void)processHighlightAddress;
- (void)processHighlightName;

@end

