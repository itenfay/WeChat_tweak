//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJSegmentAdjustmentValueItem : NSObject
{
    _Bool _isSelected;
    float _value;
    float _minimumValue;
    float _maximumValue;
    float _defaultValue;
}

@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;

@end

