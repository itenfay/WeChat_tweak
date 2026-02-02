//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, MMUIView, NSString;

@interface WCFinderLiveRedPacketItemView
{
    CDUnknownBlockType _actionBlock;
    MMUIImageView *_imageView;
    MMUIButton *_actionButton;
    MMUIView *_imageBackgroundView;
    MMUILabel *_titleLabel;
    NSString *_imageName;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)actionClick;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImageName:(id)arg1 title:(id)arg2;

@end

