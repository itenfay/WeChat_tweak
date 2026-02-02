//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedPickerViewController;

@interface WCFinderFeedPickerHelper : NSObject
{
    CDUnknownBlockType _onCancel;
    CDUnknownBlockType _onFinish;
    WCFinderFeedPickerViewController *_picker;
}

+ (void)pickPostedFeedFromVC:(id)arg1 config:(CDUnknownBlockType)arg2 onCancel:(CDUnknownBlockType)arg3 onFinish:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderFeedPickerViewController *picker; // @synthesize picker=_picker;
@property(copy, nonatomic) CDUnknownBlockType onFinish; // @synthesize onFinish=_onFinish;
@property(copy, nonatomic) CDUnknownBlockType onCancel; // @synthesize onCancel=_onCancel;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)arg1;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

