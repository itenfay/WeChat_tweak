//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, WCDataItem, WCMomentsPostReportSession;

@interface WCMomentsPostShareBaseViewModel : NSObject
{
    _Bool _Configurations_canShowShareButton;
    WCDataItem *_dataItem;
    long long _scene;
    WCMomentsPostReportSession *_postSession;
    NSString *_svgIconName;
    UIColor *_svgIconColor;
    NSString *_tips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIColor *svgIconColor; // @synthesize svgIconColor=_svgIconColor;
@property(copy, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(retain, nonatomic) WCMomentsPostReportSession *postSession; // @synthesize postSession=_postSession;
@property(nonatomic) _Bool Configurations_canShowShareButton; // @synthesize Configurations_canShowShareButton=_Configurations_canShowShareButton;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)willStartSharing;
- (void)didClickShareButton;
- (void)willDisplayShareButton;
- (_Bool)reallyShareFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_startMediaDownloaders:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_prepareMediaDownloaders;
- (_Bool)shareFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasActionRecordForShowingShareButton;
- (_Bool)shouldShowShareButton;
- (void)updateDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 scene:(long long)arg2;
- (void)dr_resetShareButton:(id)arg1;
- (void)dr_bindShareButton:(id)arg1;

@end

