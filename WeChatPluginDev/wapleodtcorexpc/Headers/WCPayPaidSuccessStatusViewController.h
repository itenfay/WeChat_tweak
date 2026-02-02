//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton, UIColor, UIImageView, UILabel, UIView, WCPayPaidSuccessStatusModel;
@protocol WCPayPaidSuccessStatusViewControllerDelegate;

@interface WCPayPaidSuccessStatusViewController
{
    id <WCPayPaidSuccessStatusViewControllerDelegate> _delegate;
    NSString *_nsTitle;
    UIColor *_backgroundColor;
    WCPayPaidSuccessStatusModel *_statusModel;
    NSMutableArray *_details;
    NSMutableArray *_bottomTips;
    unsigned long long _vcType;
    unsigned long long _vcStatus;
    UIView *_m_statusDetailView;
    UIView *_m_topLineView;
    UIView *_m_bottomLineView;
    UILabel *_lastValueLabel;
    UIButton *_m_doneButton;
    UIView *_m_statusBriefView;
    UIView *_m_statusImageView;
    UIImageView *_m_statusIconView;
    UILabel *_m_statusFirstLabel;
    UILabel *_m_statusSecondLabel;
    UILabel *_m_statusSecondDescLabel;
    UILabel *_m_statusThirdLabel;
    UILabel *_m_statusThirdDescLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_statusThirdDescLabel; // @synthesize m_statusThirdDescLabel=_m_statusThirdDescLabel;
@property(retain, nonatomic) UILabel *m_statusThirdLabel; // @synthesize m_statusThirdLabel=_m_statusThirdLabel;
@property(retain, nonatomic) UILabel *m_statusSecondDescLabel; // @synthesize m_statusSecondDescLabel=_m_statusSecondDescLabel;
@property(retain, nonatomic) UILabel *m_statusSecondLabel; // @synthesize m_statusSecondLabel=_m_statusSecondLabel;
@property(retain, nonatomic) UILabel *m_statusFirstLabel; // @synthesize m_statusFirstLabel=_m_statusFirstLabel;
@property(retain, nonatomic) UIImageView *m_statusIconView; // @synthesize m_statusIconView=_m_statusIconView;
@property(retain, nonatomic) UIView *m_statusImageView; // @synthesize m_statusImageView=_m_statusImageView;
@property(retain, nonatomic) UIView *m_statusBriefView; // @synthesize m_statusBriefView=_m_statusBriefView;
@property(retain, nonatomic) UIButton *m_doneButton; // @synthesize m_doneButton=_m_doneButton;
@property(retain) UILabel *lastValueLabel; // @synthesize lastValueLabel=_lastValueLabel;
@property(retain, nonatomic) UIView *m_bottomLineView; // @synthesize m_bottomLineView=_m_bottomLineView;
@property(retain, nonatomic) UIView *m_topLineView; // @synthesize m_topLineView=_m_topLineView;
@property(retain, nonatomic) UIView *m_statusDetailView; // @synthesize m_statusDetailView=_m_statusDetailView;
@property(nonatomic) unsigned long long vcStatus; // @synthesize vcStatus=_vcStatus;
@property(nonatomic) unsigned long long vcType; // @synthesize vcType=_vcType;
@property(retain, nonatomic) NSMutableArray *bottomTips; // @synthesize bottomTips=_bottomTips;
@property(retain, nonatomic) NSMutableArray *details; // @synthesize details=_details;
@property(retain, nonatomic) WCPayPaidSuccessStatusModel *statusModel; // @synthesize statusModel=_statusModel;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(nonatomic) __weak id <WCPayPaidSuccessStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getStatusBarColor:(unsigned int)arg1;
- (id)getStatusImage:(unsigned int)arg1;
- (void)updateSuccessStatusImageView;
- (void)updateStausImageView;
- (void)updateBottomLineView;
- (void)updateTopLineView;
- (void)updateDoneBtn;
- (void)updateDetailLabelView;
- (void)updateTransToBankCardDetailView;
- (void)updateStatusLabelView;
- (void)updateStatusBriefView;
- (void)onDone;
- (void)initNavigationBar;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

@end

