//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSString;

@interface GCDefaultCloseWindowImpl : NSObject
{
    CDUnknownBlockType _onCloseBlock;
    MMPageSheetAdapter *_weakPageAdapter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetAdapter *weakPageAdapter; // @synthesize weakPageAdapter=_weakPageAdapter;
@property(copy, nonatomic) CDUnknownBlockType onCloseBlock; // @synthesize onCloseBlock=_onCloseBlock;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)onWebViewControllerRecieveCloseEvent:(id)arg1;
- (id)initWithWebViewController:(id)arg1 onCloseBlock:(CDUnknownBlockType)arg2 pageSheetAdapter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

