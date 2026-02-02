//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCPayNetImageResource;

@interface PocketMoneyMessageViewModel
{
    NSMutableArray *_titleLabelStyles;
    NSMutableArray *_descLabelStyles;
    WCPayNetImageResource *_iconImageResource;
    struct CGSize _titleSize;
    struct CGSize _descSize;
    struct CGSize _viewSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNetImageResource *iconImageResource; // @synthesize iconImageResource=_iconImageResource;
@property(retain, nonatomic) NSMutableArray *descLabelStyles; // @synthesize descLabelStyles=_descLabelStyles;
@property(retain, nonatomic) NSMutableArray *titleLabelStyles; // @synthesize titleLabelStyles=_titleLabelStyles;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGSize descSize; // @synthesize descSize=_descSize;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
- (void)getIconImageResource:(CDUnknownBlockType)arg1;
- (id)sourceIconUrlString;
- (id)sourceTag;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
@property(readonly, nonatomic) double iconSize;
- (id)descColor;
- (id)titleColor;
- (id)descText;
- (id)titleText;
- (id)cellViewClassName;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;

@end

