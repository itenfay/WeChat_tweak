//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSMutableArray, NSString, UIScrollView, UIView;
@protocol WCPayFaceReceiverViewDelegate;

@interface WCPayFaceReceiverView
{
    _Bool _bScrollViewAnimating;
    NSMutableArray *_arrReceiverInfos;
    long long _balanceNum;
    id <WCPayFaceReceiverViewDelegate> _m_delegate;
    NSMutableArray *_receiverHeadImages;
    UIView *_backgroundView;
    UIScrollView *_backgroundScrollView;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bScrollViewAnimating; // @synthesize bScrollViewAnimating=_bScrollViewAnimating;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *receiverHeadImages; // @synthesize receiverHeadImages=_receiverHeadImages;
@property(nonatomic) __weak id <WCPayFaceReceiverViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) long long balanceNum; // @synthesize balanceNum=_balanceNum;
@property(retain, nonatomic) NSMutableArray *arrReceiverInfos; // @synthesize arrReceiverInfos=_arrReceiverInfos;
- (void)updateFaceHB:(id)arg1;
- (void)clearIndicatorView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDetail;
- (_Bool)checkExisted:(id)arg1;
- (void)makeHeadImageView:(id)arg1;
- (void)refreshViewWithName:(id)arg1;
- (void)clearAllReceiversAndDisappear;
- (void)addReceiver:(id)arg1 animated:(_Bool)arg2;
- (void)addReceiver:(id)arg1;
- (void)initDataAndView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

