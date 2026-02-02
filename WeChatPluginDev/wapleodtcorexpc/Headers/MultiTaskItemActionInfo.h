//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTaskItemActionInfo : NSObject
{
    NSString *_contextId;
    unsigned long long _itemType;
    NSString *_itemId;
    unsigned long long _position;
    unsigned long long _exposeTimestamp;
    unsigned long long _action;
    NSString *_ItemSubId;
    unsigned long long _lastExposeTimestamp;
    unsigned long long _importTImestamp;
    unsigned long long _aliveTime;
    long long _operationPath;
}

- (void).cxx_destruct;
@property(nonatomic) long long operationPath; // @synthesize operationPath=_operationPath;
@property(nonatomic) unsigned long long aliveTime; // @synthesize aliveTime=_aliveTime;
@property(nonatomic) unsigned long long importTImestamp; // @synthesize importTImestamp=_importTImestamp;
@property(nonatomic) unsigned long long lastExposeTimestamp; // @synthesize lastExposeTimestamp=_lastExposeTimestamp;
@property(retain, nonatomic) NSString *ItemSubId; // @synthesize ItemSubId=_ItemSubId;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long exposeTimestamp; // @synthesize exposeTimestamp=_exposeTimestamp;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;

@end

