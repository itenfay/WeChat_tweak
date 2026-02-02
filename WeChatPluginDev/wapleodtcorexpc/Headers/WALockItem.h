//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSContext;

@interface WALockItem : NSObject
{
    _Bool _writeLock;
    unsigned int _itemId;
    unsigned int _block;
    unsigned int _workerId;
    JSContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int block; // @synthesize block=_block;
@property(nonatomic) _Bool writeLock; // @synthesize writeLock=_writeLock;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;

@end

