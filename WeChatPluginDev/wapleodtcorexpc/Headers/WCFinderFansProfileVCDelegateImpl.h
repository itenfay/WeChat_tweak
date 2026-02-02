//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFansProfileVCDelegateImpl : NSObject
{
}

+ (id)currentWxUsername:(id)arg1;
+ (id)sharedInstance;
- (void)handleFinderPrivateMsgWithFansVC:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickControlWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

