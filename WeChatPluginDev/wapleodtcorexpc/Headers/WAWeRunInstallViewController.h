//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CContactVerifyLogic, MMHeadImageView, MMUILabel, NSString, UIButton, UIImageView, UIScrollView, UIView;

@interface WAWeRunInstallViewController
{
    CContact *m_weSportContact;
    NSString *m_nsWeappName;
    CDUnknownBlockType m_callBack;
    CContactVerifyLogic *m_oLogic;
    UIScrollView *_backgroundScrollView;
    UIView *m_headerView;
    MMHeadImageView *m_headImgView;
    double m_headImgOriginalWidth;
    double m_headImgOriginalHeight;
    double m_headImgOriginalImageWidth;
    double m_headImgOriginalImageHeight;
    MMUILabel *m_displayNameLabel;
    UIView *m_statusView;
    MMUILabel *m_statusLabel;
    UIImageView *m_statusImgView;
    UIView *m_descView;
    UIView *m_separateLine;
    MMUILabel *m_descTitleLabel;
    UIView *m_descTipsIcon;
    MMUILabel *m_descTipsLabel;
    UIButton *m_installBtn;
    _Bool bIsClosed;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_nsWeappName; // @synthesize m_nsWeappName;
- (void)handleAddedContact;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)installPlugin;
- (void)layoutFooterView;
- (void)layoutDescView;
- (void)layoutHeaderView;
- (void)onCloseModalView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

