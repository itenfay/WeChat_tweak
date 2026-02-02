//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCTogetherTailOperation : NSObject
{
    WCDataItem *_dataItem;
    unsigned long long _displayCount;
    double _lastDisplayTime;
    unsigned long long _clickCount;
    double _lastClickTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) double lastDisplayTime; // @synthesize lastDisplayTime=_lastDisplayTime;
@property(nonatomic) unsigned long long displayCount; // @synthesize displayCount=_displayCount;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

