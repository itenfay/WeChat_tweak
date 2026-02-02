//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GameNoticeHalfScreenLayout
{
    GCLabelDynamicLayout *_titleLabelLayout;
    GCLabelDynamicLayout *_headLabelLayout;
    GCLabelDynamicLayout *_additionalTitleLabelLayout;
    GCLabelDynamicLayout *_additionalSubTitleLabelLayout;
    GCLabelDynamicLayout *_additionalBtnLayout;
    GCLabelDynamicLayout *_checkBtnLayout;
    struct CGSize _iconSize;
    struct CGSize _additionalIconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLabelDynamicLayout *checkBtnLayout; // @synthesize checkBtnLayout=_checkBtnLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *additionalBtnLayout; // @synthesize additionalBtnLayout=_additionalBtnLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *additionalSubTitleLabelLayout; // @synthesize additionalSubTitleLabelLayout=_additionalSubTitleLabelLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *additionalTitleLabelLayout; // @synthesize additionalTitleLabelLayout=_additionalTitleLabelLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *headLabelLayout; // @synthesize headLabelLayout=_headLabelLayout;
@property(nonatomic) struct CGSize additionalIconSize; // @synthesize additionalIconSize=_additionalIconSize;
@property(retain, nonatomic) GCLabelDynamicLayout *titleLabelLayout; // @synthesize titleLabelLayout=_titleLabelLayout;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
- (id)init;

@end

