//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaraAppleApp : NSObject
{
    _Bool _isForeground;
}

@property _Bool isForeground; // @synthesize isForeground=_isForeground;
- (_Bool)isDebugging;
- (optional_8fbbe2b2)kitchenStringValue:(id)arg1;
- (optional_568b6bb2)kitchenFloatValue:(id)arg1;
- (optional_3baeb69b)kitchenIntValue:(id)arg1;
- (optional_a953c506)kitchenBoolValue:(id)arg1;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResFinishDownload:(_Bool)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)onResBeginDownloadWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (void)onResHasNewWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2 version:(unsigned int)arg3;
- (optional_cf1cf573)packageServerData:(int)arg1;
- (id)exptValue:(id)arg1;
- (double)serverNow;
- (void)reportKV:(int)arg1 content:(id)arg2;
- (id)documentUser;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

