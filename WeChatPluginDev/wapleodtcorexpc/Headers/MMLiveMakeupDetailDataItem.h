//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeItem, NSString;

@interface MMLiveMakeupDetailDataItem : NSObject
{
    float _defaultValue;
    float _value;
    NSString *_detailId;
    NSString *_title;
    NSString *_coverColorString;
    unsigned long long _order;
    NSString *_effectMaterialsFolderPath;
    unsigned long long _objectType;
    NSString *_saveKey;
    MMLiveBeautyBadgeItem *_badge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyBadgeItem *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *saveKey; // @synthesize saveKey=_saveKey;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) unsigned long long objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSString *effectMaterialsFolderPath; // @synthesize effectMaterialsFolderPath=_effectMaterialsFolderPath;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *coverColorString; // @synthesize coverColorString=_coverColorString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *detailId; // @synthesize detailId=_detailId;
@property(readonly, nonatomic) _Bool isMakeupFilter;

@end

