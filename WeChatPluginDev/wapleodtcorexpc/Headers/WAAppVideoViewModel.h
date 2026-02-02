//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSData, NSString, UIImage;

@interface WAAppVideoViewModel
{
    NSString *m_videoPath;
    struct CGSize m_thumbImageSize;
    NSString *_videoTitle;
    CContact *_appContact;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *appContact; // @synthesize appContact=_appContact;
@property(readonly, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
@property(readonly, nonatomic) NSString *videoPath; // @synthesize videoPath=m_videoPath;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)cellViewClassName;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isTailPart;
- (_Bool)isShowSourceView;
@property(readonly, nonatomic) _Bool canShare;
@property(readonly, nonatomic) NSData *thumbImageData;
@property(readonly, nonatomic) UIImage *thumbImage;
- (void)makeWeishiDemo;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

