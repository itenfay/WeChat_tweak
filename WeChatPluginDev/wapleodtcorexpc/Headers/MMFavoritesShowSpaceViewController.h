//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CleanBtn, MMUILabel, MMUIView, NSString;

@interface MMFavoritesShowSpaceViewController
{
    CleanBtn *m_cleanSpaceBtn;
    MMUILabel *m_warningLabel;
    MMUIView *m_cleanBtnlineTop;
    MMUIView *m_cleanBtnlineBottom;
    MMUIView *m_cubeline;
    NSString *m_sessionId;
    int _bannerType;
    MMUILabel *_capcityInfo;
    MMUIView *_mainView;
    MMUIView *_used;
}

- (void).cxx_destruct;
@property(nonatomic) int bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) MMUIView *used; // @synthesize used=_used;
@property(retain, nonatomic) MMUIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) MMUILabel *capcityInfo; // @synthesize capcityInfo=_capcityInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didClickAtCloseButton;
- (void)goToCapcityView;
- (int)getCapcityReportStatus;
- (void)viewDidLoad;
- (id)initWithWarningType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

