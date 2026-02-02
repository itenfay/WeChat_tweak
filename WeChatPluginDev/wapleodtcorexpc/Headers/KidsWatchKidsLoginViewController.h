//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchFlexibleImageView, NSArray, UIButton;
@protocol KidsWatchKidsLoginViewControllerDelegate;

@interface KidsWatchKidsLoginViewController
{
    NSArray *_kidsAccountInfoList;
    UIButton *_switchAccountButton;
    KidsWatchFlexibleImageView *_bottomRightBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KidsWatchFlexibleImageView *bottomRightBackgroundView; // @synthesize bottomRightBackgroundView=_bottomRightBackgroundView;
@property(retain, nonatomic) UIButton *switchAccountButton; // @synthesize switchAccountButton=_switchAccountButton;
@property(retain, nonatomic) NSArray *kidsAccountInfoList; // @synthesize kidsAccountInfoList=_kidsAccountInfoList;
- (_Bool)shouldInteractivePop;
- (void)onTapKidsLoginCloseBarButtonItem;
- (void)onTapSwitchAccountButton;
- (void)onTapItemView:(id)arg1;
- (void)refreshView;
- (void)setupWithData:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchKidsLoginViewControllerDelegate> delegate; // @dynamic delegate;

@end

