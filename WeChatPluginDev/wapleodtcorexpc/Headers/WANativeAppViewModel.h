//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray;

@interface WANativeAppViewModel
{
    struct CGSize _viewSize;
    struct CGSize _titleSize;
    struct CGSize _digestSize;
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_digestLabelStyles;
    CContact *_appContact;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *appContact; // @synthesize appContact=_appContact;
- (id)getReferImage;
- (id)thumbImage;
- (unsigned int)thumbDownloadStatus;
- (id)sourceIconUrlString;
- (id)sourceTag;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (double)descWidth;
- (double)thumWidth;
- (unsigned int)digestMaxLines;
- (unsigned int)titleMaxLines;
- (id)digestFont;
- (id)titleFont;
- (id)digestStr;
- (id)titleStr;
- (double)viewWidth;
- (struct CGSize)viewSize;
- (id)digestLabelStyles;
- (double)digestMaxWidth;
- (double)titleMaxWidth;
- (double)titleLeftMargin;
- (id)titleLabelStyles;
- (struct CGSize)digestSize;
- (struct CGSize)titleSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)getWAAppName;
- (id)additionalAccessibilityDescription;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

