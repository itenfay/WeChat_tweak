//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPriorityItem : NSObject
{
    NSString *_identifierKey;
    NSString *_groupId;
    long long _priority;
    unsigned long long _timestamp;
    long long _batchIndex;
    NSObject *_dataObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *dataObj; // @synthesize dataObj=_dataObj;
@property(nonatomic) long long batchIndex; // @synthesize batchIndex=_batchIndex;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *identifierKey; // @synthesize identifierKey=_identifierKey;
- (id)description;
- (long long)compareWith:(id)arg1;

@end

