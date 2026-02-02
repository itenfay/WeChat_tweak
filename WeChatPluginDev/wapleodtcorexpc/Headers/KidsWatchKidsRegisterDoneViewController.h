//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchButton, KidsWatchTipsCardView, NSString;
@protocol KidsWatchKidsRegisterDoneViewControllerDelegate;

@interface KidsWatchKidsRegisterDoneViewController
{
    KidsWatchTipsCardView *_tipsCardView;
    KidsWatchButton *_nextButton;
    NSString *_nickName;
    NSString *_openID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) KidsWatchButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) KidsWatchTipsCardView *tipsCardView; // @synthesize tipsCardView=_tipsCardView;
- (void)onTapNextButton;
- (void)onTapCloseBarButtonItem;
- (_Bool)forceCloseBarButtonItem;
- (void)initSubviews;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchKidsRegisterDoneViewControllerDelegate> delegate; // @dynamic delegate;

@end

