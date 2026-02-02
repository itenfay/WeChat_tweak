//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAWebViewController;

@interface ProfileActionSheetResponser : NSObject
{
    NSString *_cpuProfileFile;
    WAWebViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAWebViewController *vc; // @synthesize vc=_vc;
- (void)showToast:(id)arg1;
- (void)showTips:(id)arg1;
- (void)sendViaAirDrop;
- (void)sendFileToFileHelper;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShareFilePath:(id)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

