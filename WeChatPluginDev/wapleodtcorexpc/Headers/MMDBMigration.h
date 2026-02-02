//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MMDBMigration : NSObject
{
    _Bool _createTableError;
    _Bool _migrationAllFinish;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_brandUserNames;
    NSArray *_userNames;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool migrationAllFinish; // @synthesize migrationAllFinish=_migrationAllFinish;
@property(nonatomic) _Bool createTableError; // @synthesize createTableError=_createTableError;
@property(retain, nonatomic) NSArray *userNames; // @synthesize userNames=_userNames;
@property(retain, nonatomic) NSMutableSet *brandUserNames; // @synthesize brandUserNames=_brandUserNames;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned int state; // @synthesize state=_state;
- (id)init;

@end

