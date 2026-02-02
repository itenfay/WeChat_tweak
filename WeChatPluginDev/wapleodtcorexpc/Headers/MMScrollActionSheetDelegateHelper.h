//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMScrollActionSheet, NSString;

@interface MMScrollActionSheetDelegateHelper : NSObject
{
    MMScrollActionSheet *_weakActionSheet;
    CDUnknownBlockType _scrollActionSheetDidSelectItemCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scrollActionSheetDidSelectItemCallback; // @synthesize scrollActionSheetDidSelectItemCallback=_scrollActionSheetDidSelectItemCallback;
@property(nonatomic) __weak MMScrollActionSheet *weakActionSheet; // @synthesize weakActionSheet=_weakActionSheet;
- (void)scrollActionSheet:(id)arg1 clickCustomBtn:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidScroll:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (_Bool)scrollActionSheetShouldCancel:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidClickTopPrivacy:(id)arg1;
- (void)scrollActionSheetDidClickTop:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didClickUrl:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteDisableItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

