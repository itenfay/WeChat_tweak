//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIWindow, MMWebImageView, NSMutableArray, NSString, RichTextView, UIImageView, UILabel, UIView, WCCardImageBrowserViewController, WCCardVideoViewController, WCGiftCardData;

@interface WCGiftCardLetterView
{
    double _maxWidth;
    WCGiftCardData *_giftCardData;
    MMWebImageView *_headImageView;
    UILabel *_fromUserLabel;
    MMWebImageView *_giftImageView;
    UIImageView *_giftImageShadowView;
    UIImageView *_giftPlayIconView;
    RichTextView *_wishTextView;
    UIView *_divideLine;
    NSMutableArray *_textLineArray;
    long long _lineCount;
    NSString *_fullImagePath;
    MMUIWindow *_fullScreenWindow;
    WCCardVideoViewController *_videoVC;
    WCCardImageBrowserViewController *_imageVC;
    NSString *_resourcePath;
    long long _downloadState;
}

- (void).cxx_destruct;
@property(nonatomic) long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(nonatomic) __weak WCCardImageBrowserViewController *imageVC; // @synthesize imageVC=_imageVC;
@property(nonatomic) __weak WCCardVideoViewController *videoVC; // @synthesize videoVC=_videoVC;
@property(retain, nonatomic) MMUIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
@property(retain, nonatomic) NSString *fullImagePath; // @synthesize fullImagePath=_fullImagePath;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) NSMutableArray *textLineArray; // @synthesize textLineArray=_textLineArray;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) RichTextView *wishTextView; // @synthesize wishTextView=_wishTextView;
@property(retain, nonatomic) UIImageView *giftPlayIconView; // @synthesize giftPlayIconView=_giftPlayIconView;
@property(retain, nonatomic) UIImageView *giftImageShadowView; // @synthesize giftImageShadowView=_giftImageShadowView;
@property(retain, nonatomic) MMWebImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) UILabel *fromUserLabel; // @synthesize fromUserLabel=_fromUserLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)presentImageVC:(id)arg1;
- (void)giftButtonDidClick:(id)arg1;
- (void)beiginDownLoad;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

