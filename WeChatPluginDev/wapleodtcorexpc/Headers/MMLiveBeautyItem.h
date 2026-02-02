//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeItem, NSString;

@interface MMLiveBeautyItem : NSObject
{
    _Bool _applyBlurring;
    _Bool _reverseValueDisplay;
    _Bool _applyAbsoluteValue;
    _Bool _useOpaqueResources;
    NSString *_itemId;
    NSString *_displayName;
    NSString *_colorHexString;
    MMLiveBeautyBadgeItem *_badge;
    NSString *_driverName;
    double _minimumValue;
    double _maximumValue;
    double _defaultValue;
    NSString *_positiveResourcesPath;
    NSString *_negativeResourcesPath;
    double _value;
    NSString *_itemGroupId;
    unsigned long long _order;
}

+ (id)itemInJsonDictionary:(id)arg1 suiteId:(id)arg2 suiteResourcePath:(id)arg3 itemGroups:(id)arg4 badges:(id)arg5 isLowSpecDevice:(_Bool)arg6;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *itemGroupId; // @synthesize itemGroupId=_itemGroupId;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *negativeResourcesPath; // @synthesize negativeResourcesPath=_negativeResourcesPath;
@property(retain, nonatomic) NSString *positiveResourcesPath; // @synthesize positiveResourcesPath=_positiveResourcesPath;
@property(nonatomic) _Bool useOpaqueResources; // @synthesize useOpaqueResources=_useOpaqueResources;
@property(nonatomic) _Bool applyAbsoluteValue; // @synthesize applyAbsoluteValue=_applyAbsoluteValue;
@property(nonatomic) _Bool reverseValueDisplay; // @synthesize reverseValueDisplay=_reverseValueDisplay;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(retain, nonatomic) MMLiveBeautyBadgeItem *badge; // @synthesize badge=_badge;
@property(nonatomic) _Bool applyBlurring; // @synthesize applyBlurring=_applyBlurring;
@property(retain, nonatomic) NSString *colorHexString; // @synthesize colorHexString=_colorHexString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (double)equivalentModernValueForLegacyValue:(double)arg1;

@end

