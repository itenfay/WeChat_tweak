//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMHeadImageView, NSString, RadarSearchMember, UIImageView, UILabel;
@protocol RSHeadImageViewDelegate;

@interface RSHeadImageView
{
    int _status;
    UILabel *_displayNameWhite;
    UIImageView *_normalBg;
    UIImageView *_statusBGView;
    UIImageView *_statusView;
    UIImageView *_selectedView;
    MMHeadImageView *_imageView;
    RadarSearchMember *_member;
    NSString *_verifyTicket;
    id <RSHeadImageViewDelegate> _delegate;
    int m_iPointIndex;
    CContact *m_contact;
}

+ (struct CGSize)getHeadImageSize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RSHeadImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) int m_iPointIndex; // @synthesize m_iPointIndex;
@property(retain, nonatomic) NSString *verifyTicket; // @synthesize verifyTicket=_verifyTicket;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) MMHeadImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) RadarSearchMember *member; // @synthesize member=_member;
- (void)OnClickHeadImageView;
- (void)initDisplayNameView;
- (id)genDisplayNameLabel;
- (id)getDisplayName;
- (void)setRemarkName:(id)arg1;
- (void)initStatusView;
- (void)animationShowDidStop;
- (void)showStatusView;
- (void)hideStatusView;
- (void)afterStatusViewHide;
- (void)doStatusPopupAnimation;
- (void)updateStatusView;
- (void)initHeadImageView;
- (void)initBackgroundView;
- (void)initView;
- (id)initWithRadarSearchMember:(id)arg1;

@end

