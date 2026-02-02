//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSNumber;

@interface MMFinderLiveShopSettingAskForPromotingAdapter : NSObject
{
    NSNumber *_valueUpdating;
    MMFinderLiveTaskId *_taskID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSNumber *valueUpdating; // @synthesize valueUpdating=_valueUpdating;
- (void)updateValue:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool value;
@property(readonly, nonatomic) _Bool displayValue;
- (id)initWithTaskID:(id)arg1;

@end

