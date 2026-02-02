//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCLocationInfo;

@interface WCFinderLocationSelectItem : NSObject
{
    WCLocationInfo *_locationInfo;
    unsigned long long _itemType;
}

+ (id)emptyLocationItem;
+ (id)selectOtherItem;
+ (id)selectableLocationItemWithLocation:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;

@end

