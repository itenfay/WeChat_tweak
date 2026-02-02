//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, UIImage;

@interface AppVideoMessageViewModel
{
    double m_titleHeight;
    struct CGSize m_timeSize;
    _Bool _isWSVideo;
    NSString *_coverImgUrl;
    CContact *_bizContact;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CContact *bizContact; // @synthesize bizContact=_bizContact;
@property(readonly, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(readonly, nonatomic) _Bool isWSVideo; // @synthesize isWSVideo=_isWSVideo;
- (double)sourceViewHeight;
- (id)additionalAccessibilityDescription;
- (_Bool)needShowSourceDividerLine;
@property(readonly, nonatomic) _Bool isMalicious;
- (double)timeHeight;
@property(readonly, nonatomic) NSString *timeText;
@property(readonly, nonatomic) double coverImgHeight;
@property(readonly, nonatomic) UIImage *thumbImage;
- (id)hostText;
@property(readonly, nonatomic) double titleHeight;
@property(readonly, nonatomic) NSString *titleText;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, nonatomic) NSString *sourceNickname;
@property(readonly, nonatomic) NSString *sourceUsrname;

@end

