//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderStreamEntranceReportModel : NSObject
{
    _Bool _findEntranceHasRedDot;
    _Bool _recommendTabRedDot;
    _Bool _followTabRedDot;
    _Bool _machineTabRedDot;
    _Bool _isChangeByScrollTab;
    unsigned long long _lastSelectTabIndex;
    unsigned long long _lastTabType;
}

@property(nonatomic) _Bool isChangeByScrollTab; // @synthesize isChangeByScrollTab=_isChangeByScrollTab;
@property(nonatomic) unsigned long long lastTabType; // @synthesize lastTabType=_lastTabType;
@property(nonatomic) unsigned long long lastSelectTabIndex; // @synthesize lastSelectTabIndex=_lastSelectTabIndex;
@property(nonatomic) _Bool machineTabRedDot; // @synthesize machineTabRedDot=_machineTabRedDot;
@property(nonatomic) _Bool followTabRedDot; // @synthesize followTabRedDot=_followTabRedDot;
@property(nonatomic) _Bool recommendTabRedDot; // @synthesize recommendTabRedDot=_recommendTabRedDot;
@property(nonatomic) _Bool findEntranceHasRedDot; // @synthesize findEntranceHasRedDot=_findEntranceHasRedDot;
- (id)description;
- (void)resetDefault;

@end

