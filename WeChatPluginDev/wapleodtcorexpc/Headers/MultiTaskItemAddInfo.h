//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTaskItemAddInfo : NSObject
{
    _Bool _isExist;
    NSString *_itemId;
    unsigned long long _itemType;
    unsigned long long _addType;
    NSString *_contextId;
    NSString *_ItemSubId;
    long long _taskCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long taskCount; // @synthesize taskCount=_taskCount;
@property(retain, nonatomic) NSString *ItemSubId; // @synthesize ItemSubId=_ItemSubId;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(nonatomic) _Bool isExist; // @synthesize isExist=_isExist;
@property(nonatomic) unsigned long long addType; // @synthesize addType=_addType;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;

@end

