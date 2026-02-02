//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTrumpetSelectCellInfo, MMUIImageView, MMUILabel, MMUIView, UIImageView, WCFinderHeadImageView;
@protocol MMFinderLiveTrumpetSelectCellDelegate;

@interface MMFinderLiveTrumpetSelectCell
{
    MMFinderLiveTrumpetSelectCellInfo *_info;
    id <MMFinderLiveTrumpetSelectCellDelegate> _delegate;
    MMUIView *_contentView;
    WCFinderHeadImageView *_headImageView;
    MMUIImageView *_createAccountImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    UIImageView *_selectStateImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectStateImageView; // @synthesize selectStateImageView=_selectStateImageView;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *createAccountImageView; // @synthesize createAccountImageView=_createAccountImageView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveTrumpetSelectCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTrumpetSelectCellInfo *info; // @synthesize info=_info;
- (void)onClickContent;
- (void)layoutUI;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initCellConfig;
- (id)initWithWidth:(double)arg1 height:(double)arg2 delegate:(id)arg3 info:(id)arg4;

@end

