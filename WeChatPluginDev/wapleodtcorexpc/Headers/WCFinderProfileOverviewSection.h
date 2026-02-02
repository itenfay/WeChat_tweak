//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WCFinderOverviewSectionDef;

@interface WCFinderProfileOverviewSection : NSObject
{
    _Bool _showAllButton;
    int _commentScene;
    WCFinderOverviewSectionDef *_def;
    long long _secType;
    id _data;
    long long _elementCount;
    NSArray *_layouts;
    NSDictionary *_layoutMap;
}

+ (id)nameForSecType:(long long)arg1;
+ (long long)mapTabInfoType:(unsigned int)arg1;
+ (id)sectionWithType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showAllButton; // @synthesize showAllButton=_showAllButton;
@property(retain, nonatomic) NSDictionary *layoutMap; // @synthesize layoutMap=_layoutMap;
@property(retain, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
@property(nonatomic) long long elementCount; // @synthesize elementCount=_elementCount;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long secType; // @synthesize secType=_secType;
@property(retain, nonatomic) WCFinderOverviewSectionDef *def; // @synthesize def=_def;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (long long)displayElementRowCount:(long long)arg1;
- (_Bool)shouldDisplay;
@property(readonly, nonatomic) NSString *reportName;

@end

