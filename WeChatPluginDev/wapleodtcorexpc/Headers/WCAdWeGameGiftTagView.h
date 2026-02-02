//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, WCAdURLImageView, WCAdWeGameGiftTagInfo, WCDataItem;
@protocol WCAdWeGameGiftTagViewDelegate;

@interface WCAdWeGameGiftTagView
{
    id <WCAdWeGameGiftTagViewDelegate> _delegate;
    WCAdWeGameGiftTagInfo *_tagInfo;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    MMUIButton *_containerView;
    WCAdURLImageView *_iconView;
    MMUILabel *_mainTitleView;
    WCAdURLImageView *_tailIconView;
    MMUILabel *_tailTitleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tailTitleView; // @synthesize tailTitleView=_tailTitleView;
@property(retain, nonatomic) WCAdURLImageView *tailIconView; // @synthesize tailIconView=_tailIconView;
@property(retain, nonatomic) MMUILabel *mainTitleView; // @synthesize mainTitleView=_mainTitleView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdWeGameGiftTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(nonatomic) __weak id <WCAdWeGameGiftTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickButton:(id)arg1;
- (_Bool)hasTailIcon;
- (_Bool)hasIcon;
- (id)createLabel:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)adjustView;
- (double)mainTitleMaxWidth;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 tagInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;

@end

