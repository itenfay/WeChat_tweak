//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface WCFinderFeedPickerSampleDetailVCDelegateObject : NSObject
{
    UIViewController *_hostVC;
}

+ (void)downloadCoverOrThumbImageWithMediaWrap:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)delegateObjWithHostVC:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *hostVC; // @synthesize hostVC=_hostVC;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickDoneWithDataItem:(id)arg2;
- (void)_releaseSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

