//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCFinderCommentIdentityActionSheetView
{
    unsigned long long _initizlizeSelectedType;
    UIView *_tipsCustomView;
    UIView *_finderCustomView;
    UIView *_wechatCustomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *wechatCustomView; // @synthesize wechatCustomView=_wechatCustomView;
@property(retain, nonatomic) UIView *finderCustomView; // @synthesize finderCustomView=_finderCustomView;
@property(retain, nonatomic) UIView *tipsCustomView; // @synthesize tipsCustomView=_tipsCustomView;
@property(nonatomic) unsigned long long initizlizeSelectedType; // @synthesize initizlizeSelectedType=_initizlizeSelectedType;
- (void)tapWeChatActionSheetCell;
- (void)tapFinderActionSheetCell;
- (id)getContentViewWithFinder:(id)arg1 wechatContact:(id)arg2;
- (id)getWeChatActionSheetView;
- (id)getFinderActionSheetView;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

