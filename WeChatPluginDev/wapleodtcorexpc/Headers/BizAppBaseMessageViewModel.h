//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray, NSString, UIColor, UIFont;

@interface BizAppBaseMessageViewModel
{
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
    _Bool _needShowSourceLine;
    CContact *_bizContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *bizContact; // @synthesize bizContact=_bizContact;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) UIColor *sourceBackgroundColor;
@property(readonly, nonatomic) double sourceViewHeight;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)resetLayoutCache;
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
@property(readonly, nonatomic) NSString *sourceDetailStr;
@property(readonly, nonatomic) NSString *sourceUsrname;
@property(readonly, nonatomic) NSString *sourceNickname;
@property(readonly, nonatomic) _Bool needShowSourceDividerLine;
@property(readonly, nonatomic) _Bool needShowSourceLine;
@property(readonly, nonatomic) NSString *digestStr;
@property(readonly, nonatomic) NSString *titleStr;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

