//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol EnterpriseBrandContactHelperDelegate;

@interface EnterpriseBrandContactHelper
{
    NSString *_contextBrandUserName;
    unsigned int _contextScene;
    unsigned int _useScene;
    id <EnterpriseBrandContactHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseBrandContactHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)arg1 extParams:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleReportImmediatelyType:(id)arg1;
- (void)reportImmediatelyType:(unsigned int)arg1 mainAttr:(id)arg2 operation:(unsigned int)arg3 scene:(unsigned int)arg4 flag:(unsigned long long)arg5;
- (void)reportWeWorkBannerNew:(unsigned int)arg1;
- (void)reportWeWork:(unsigned int)arg1;
- (void)openWeWorkApp;
- (void)openWeWorkDownload;
- (void)confirmWeWorkDownloadWithAlert;
- (void)confirmWeWorkDownloadWithActionSheet;
- (void)openWeWork:(id)arg1 withNavController:(id)arg2;
- (void)exposeWeWork:(id)arg1 scene:(unsigned int)arg2;
- (void)confirmDisableSubBrand:(id)arg1;
- (void)disableSubBrand:(id)arg1;
- (id)initWithScene:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

