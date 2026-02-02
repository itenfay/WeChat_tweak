//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BaseState : NSObject
{
    _Bool isFirstEntry;
    NSString *_stateName;
    NSMutableDictionary *_stateData;
    CDUnknownBlockType _firstEntryBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType firstEntryBlock; // @synthesize firstEntryBlock=_firstEntryBlock;
@property(retain, nonatomic) NSMutableDictionary *stateData; // @synthesize stateData=_stateData;
@property(retain, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
@property(nonatomic) _Bool isFirstEntry; // @synthesize isFirstEntry;
- (void)handleEvent:(id)arg1;
- (void)handleInnerAction:(id)arg1 data:(id)arg2;
- (void)moveToNextState;
- (void)onResume;
- (void)onPause;
- (void)reset;
- (void)updateSDKSetting:(id)arg1;
- (void)update:(struct Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)exit;
- (void)enter;
- (void)unload;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;
- (id)init;

@end

