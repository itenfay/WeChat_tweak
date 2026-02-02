//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer;

@interface LiteAppJsApiAdFollowBrandUser
{
    int _brandUIScene;
    int _brandUISubScene;
    MMTimer *_brandContactSyncTimer;
}

- (void).cxx_destruct;
@property(nonatomic) int brandUISubScene; // @synthesize brandUISubScene=_brandUISubScene;
@property(nonatomic) int brandUIScene; // @synthesize brandUIScene=_brandUIScene;
@property(retain, nonatomic) MMTimer *brandContactSyncTimer; // @synthesize brandContactSyncTimer=_brandContactSyncTimer;
- (void)onBrandFollowFinish:(_Bool)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)scheduleBrandContactSyncTimer;
- (void)onModifyContact:(id)arg1;
- (void)onTimeoutBrandContactSync;
- (void)invalidateBrandContactSyncTimer;
- (void)createVerify:(id)arg1 andSubScene:(unsigned int)arg2;
- (void)doBrandFollow:(id)arg1;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end

