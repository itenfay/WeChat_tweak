//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGlobalFrequencyClickInfo : NSObject
{
    _Bool _lastClickWithRedDot;
    NSString *_lastClickEntryPath;
    long long _lastTabType;
    NSString *_lastFeedId;
    NSString *_lastReportExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastReportExtInfo; // @synthesize lastReportExtInfo=_lastReportExtInfo;
@property(retain, nonatomic) NSString *lastFeedId; // @synthesize lastFeedId=_lastFeedId;
@property(nonatomic) long long lastTabType; // @synthesize lastTabType=_lastTabType;
@property(nonatomic) _Bool lastClickWithRedDot; // @synthesize lastClickWithRedDot=_lastClickWithRedDot;
@property(copy, nonatomic) NSString *lastClickEntryPath; // @synthesize lastClickEntryPath=_lastClickEntryPath;
- (id)init;

@end

