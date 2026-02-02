//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeItem, NSString;

@interface MMLiveFilterDataItem : NSObject
{
    float _defaultValue;
    float _value;
    NSString *_filterId;
    NSString *_title;
    NSString *_filterFilePath;
    NSString *_coverColorString;
    MMLiveBeautyBadgeItem *_badge;
    unsigned long long _order;
}

+ (id)defaultNoopItem;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) MMLiveBeautyBadgeItem *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *coverColorString; // @synthesize coverColorString=_coverColorString;
@property(retain, nonatomic) NSString *filterFilePath; // @synthesize filterFilePath=_filterFilePath;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, nonatomic) NSString *saveKey;
@property(readonly, nonatomic) _Bool canSetValue;
@property(readonly, nonatomic) _Bool effective;
- (id)init;

@end

