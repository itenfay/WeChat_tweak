//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTaskItemPageBrowseInfo : NSObject
{
    NSString *_contextId;
    NSString *_itemId;
    unsigned long long _itemType;
    NSString *_ItemSubId;
    unsigned long long _duration;
    unsigned long long _lastStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *ItemSubId; // @synthesize ItemSubId=_ItemSubId;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;

@end

