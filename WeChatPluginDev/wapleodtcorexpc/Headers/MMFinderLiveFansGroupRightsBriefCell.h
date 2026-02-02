//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel;

@interface MMFinderLiveFansGroupRightsBriefCell
{
    CDUnknownBlockType _onUnsubscribe;
    MMUIButton *_unsubscribeButton;
    MMUILabel *_detailLabel;
}

+ (double)cellHeightWithMaxWidth:(double)arg1 showUnsubscribeSuperfanButton:(_Bool)arg2;
+ (double)layoutPadding;
+ (id)detailFont;
+ (id)detailText;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUIButton *unsubscribeButton; // @synthesize unsubscribeButton=_unsubscribeButton;
@property(copy, nonatomic) CDUnknownBlockType onUnsubscribe; // @synthesize onUnsubscribe=_onUnsubscribe;
- (void)layoutSubviews;
- (void)unsubscribeSuperfanButtonClicked;
- (void)setShowUnsubscribeSuperfanButton:(_Bool)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

