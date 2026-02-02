//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface MMMusicNoDotSelectItemDisplayViewBgView
{
    UIImageView *_hintImageView;
    unsigned long long _curItemCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long curItemCount; // @synthesize curItemCount=_curItemCount;
@property(retain, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
- (void)changeSizeWithItemCount:(unsigned long long)arg1 itemSize:(struct CGSize)arg2 itemMargin:(double)arg3 itemInsets:(struct UIEdgeInsets)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

