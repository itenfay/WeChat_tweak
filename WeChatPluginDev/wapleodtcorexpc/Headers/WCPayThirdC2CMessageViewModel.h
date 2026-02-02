//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BubbleInfo, NSString, UIColor, UIFont, UIImage, WCPayNetImageResource;

@interface WCPayThirdC2CMessageViewModel
{
    UIImage *_m_miniIconImage;
    WCPayNetImageResource *_m_backgroundResource;
    WCPayNetImageResource *_m_iconResource;
    WCPayNetImageResource *_m_miniIconResource;
    BubbleInfo *_thirdC2CBubbleInfo;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BubbleInfo *thirdC2CBubbleInfo; // @synthesize thirdC2CBubbleInfo=_thirdC2CBubbleInfo;
@property(retain, nonatomic) WCPayNetImageResource *m_miniIconResource; // @synthesize m_miniIconResource=_m_miniIconResource;
@property(retain, nonatomic) WCPayNetImageResource *m_iconResource; // @synthesize m_iconResource=_m_iconResource;
@property(retain, nonatomic) WCPayNetImageResource *m_backgroundResource; // @synthesize m_backgroundResource=_m_backgroundResource;
@property(retain, nonatomic) UIImage *m_miniIconImage; // @synthesize m_miniIconImage=_m_miniIconImage;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) UIColor *descColor;
@property(readonly, nonatomic) UIColor *titleColor;
- (id)parseColorFromString:(id)arg1;
@property(readonly, nonatomic) NSString *miniIconUrl;
@property(readonly, nonatomic) NSString *backgroundName;
@property(readonly, nonatomic) NSString *backgroundUrlInDarkmode;
@property(readonly, nonatomic) NSString *backgroundUrl;
- (id)iconUrl;
- (id)iconName;
- (double)iconSize;
- (id)descText;
@property(readonly, nonatomic) UIFont *titleFont;
- (id)titleText;
- (id)sourceIcon;
- (void)setMiniIconImage:(id)arg1;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (id)bgBubbleInfo;
- (unsigned long long)bubbleType;
@property(readonly, nonatomic) UIColor *sceneTextColor;
@property(readonly, nonatomic) UIColor *seperatorColor;
- (id)cellViewClassName;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;

@end

