//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdFinderDialogBaseInfo, WCAdvertiseInfo, WCFinderJumpInfoParams;

@interface WCAdFinderDialogClickManager : NSObject
{
    _Bool _directToAppUserConfirm;
    int _directToAppReportScene;
    WCAdFinderDialogBaseInfo *_dialogInfo;
    WCFinderJumpInfoParams *_jumpParams;
    WCAdvertiseInfo *_advertiseInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int directToAppReportScene; // @synthesize directToAppReportScene=_directToAppReportScene;
@property(nonatomic) _Bool directToAppUserConfirm; // @synthesize directToAppUserConfirm=_directToAppUserConfirm;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCFinderJumpInfoParams *jumpParams; // @synthesize jumpParams=_jumpParams;
@property(retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo; // @synthesize dialogInfo=_dialogInfo;
- (_Bool)isDialogTypeDirectToApp;
- (void)reportDirectToAppDialogClickWithReportScene:(int)arg1 isForShowDialog:(_Bool)arg2;
- (void)doDirectToAppDialogClickReport;
- (void)reportConversionOnlineForLaunchApp:(int)arg1;
- (void)doConversionShowUpReport;
- (void)doJumpStoreEventWithInfo:(id)arg1;
- (void)doDoubleLinkJumpEventWithInfo:(id)arg1 jumpParams:(id)arg2;
- (void)handleLaunchAppResultWithAppInfo:(id)arg1 bIsCancel:(_Bool)arg2 bIsLaunchSuccess:(_Bool)arg3;
- (void)doDirectToAppEventWithInfo:(id)arg1;
- (void)commitDialogConfirmEvents;
- (id)initWithDialogInfo:(id)arg1 jumpParams:(id)arg2;

@end

