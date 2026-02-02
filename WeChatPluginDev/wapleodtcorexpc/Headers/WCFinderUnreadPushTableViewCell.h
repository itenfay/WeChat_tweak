//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMSessionInfo, MMUIButton, MMUILabel;

@interface WCFinderUnreadPushTableViewCell
{
    CDUnknownBlockType _closeAction;
    MMUILabel *_subTitleLabel;
    MMUILabel *_greenLabel;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMHeadImageView *_headImageView;
    MMSessionInfo *_sessionInfo;
    MMUILabel *_firstLabel;
    MMUILabel *_secondLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(nonatomic) __weak MMUILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) MMSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) __weak MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak MMUILabel *greenLabel; // @synthesize greenLabel=_greenLabel;
@property(nonatomic) __weak MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void)layoutSubviews;
- (void)closeFinderUnreadMsg:(id)arg1;
- (void)setupUI;
- (void)updateLayout;
- (void)updateWithSessionInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

