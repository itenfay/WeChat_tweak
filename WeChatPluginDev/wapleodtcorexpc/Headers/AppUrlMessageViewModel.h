//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIFont, UIImage;

@interface AppUrlMessageViewModel
{
    double m_titleHeight;
    double m_descHeight;
    struct CGSize _viewSize;
    struct CGSize _titleSize;
    struct CGSize _digestSize;
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
    double _titleMaxWidth;
    double _digestMaxWidth;
    UIFont *_titleFont;
    UIFont *_digestFont;
    unsigned int _titleMaxLines;
    unsigned int _digestMaxLines;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double descHeight; // @synthesize descHeight=m_descHeight;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (void)onMessageDownloadThumbImageOK;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (id)sourceIcon;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) NSString *descText;
- (id)hostText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) unsigned int digestMaxLines;
@property(readonly, nonatomic) unsigned int titleMaxLines;
@property(readonly, nonatomic) UIFont *digestFont;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) double digestMaxWidth;
@property(readonly, nonatomic) double titleMaxWidth;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) struct CGSize titleSize;
@property(readonly, nonatomic) struct CGSize viewSize;
@property(readonly, nonatomic) NSString *digestStr;
@property(readonly, nonatomic) NSString *titleStr;
- (void)resetLayoutCache;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

