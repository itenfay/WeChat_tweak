//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UINavigationController;

@interface WCFinderCreateSettingCellHelperShowInWXProfileClickDelegate : NSObject
{
    UINavigationController *_navVC;
}

+ (id)jumpWXProfileHref;
+ (id)instanceWithNavVC:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navVC; // @synthesize navVC=_navVC;
- (void)openSelfContactInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)attachtoObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

