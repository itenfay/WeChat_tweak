//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_source;

@interface MMCountDownLabelHelper : NSObject
{
    NSHashTable *_labels;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSHashTable *labels; // @synthesize labels=_labels;
- (void)updateLabels;
- (void)addLabel:(id)arg1;
- (id)init;

@end

