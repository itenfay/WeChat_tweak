//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView, WCFinderContact;
@protocol WCActionSheetWithHeadAvatarDelegate;

@interface WCActionSheetWithHeadAvatar
{
    NSString *_shootEntryExtInfo;
    id <WCActionSheetWithHeadAvatarDelegate> _m_delegate;
    WCFinderContact *_contact;
    NSArray *_itemsArray;
    UIView *_finderAvatarView;
    UIView *_tipsView;
    UIView *_headView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *finderAvatarView; // @synthesize finderAvatarView=_finderAvatarView;
@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCActionSheetWithHeadAvatarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *shootEntryExtInfo; // @synthesize shootEntryExtInfo=_shootEntryExtInfo;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)buildButtonWithTitle:(id)arg1 subTitle:(id)arg2 subTitleColor:(id)arg3 showNew:(_Bool)arg4 clickBlock:(CDUnknownBlockType)arg5;
- (id)buildSeparateLine;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;
- (id)getCustomHeadView;
- (void)updateContact:(id)arg1 itemsArray:(id)arg2;

@end

