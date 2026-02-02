//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GiftNewCustomizationMagicRewardResource, NSMutableArray;

@interface MMLiveMagicRewardResourceCheckTask : NSObject
{
    _Bool _isChecking;
    GiftNewCustomizationMagicRewardResource *_magicRewardResource;
    unsigned long long _currResourceState;
    NSMutableArray *_callbackObjList;
    CDUnknownBlockType _resourceStateChangeCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resourceStateChangeCallback; // @synthesize resourceStateChangeCallback=_resourceStateChangeCallback;
@property(nonatomic) _Bool isChecking; // @synthesize isChecking=_isChecking;
@property(retain, nonatomic) NSMutableArray *callbackObjList; // @synthesize callbackObjList=_callbackObjList;
@property(nonatomic) unsigned long long currResourceState; // @synthesize currResourceState=_currResourceState;
@property(retain, nonatomic) GiftNewCustomizationMagicRewardResource *magicRewardResource; // @synthesize magicRewardResource=_magicRewardResource;
- (id)description;
- (_Bool)endCheckWithResult:(unsigned long long)arg1;
- (_Bool)startCheck;
- (_Bool)isFitResourceUrl:(id)arg1 md5:(id)arg2;
- (void)updateResourceState:(unsigned long long)arg1;
- (void)clearAllCallbacks;
- (void)reset;
- (void)updateMagicRewardResourceIfNeeded:(id)arg1;
- (void)invokeCallbacksWithRet:(unsigned long long)arg1;
- (void)addCheckCallback:(CDUnknownBlockType)arg1 maxWaitTime:(double)arg2;
- (id)initWithMagicRewardResource:(id)arg1;

@end

