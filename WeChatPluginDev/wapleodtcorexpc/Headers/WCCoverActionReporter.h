//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCCoverActionReporter : NSObject
{
    long long _scene;
    WCDataItem *_lastDisplayedDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *lastDisplayedDataItem; // @synthesize lastDisplayedDataItem=_lastDisplayedDataItem;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)reportWithDataItem:(id)arg1 action:(long long)arg2;

@end

