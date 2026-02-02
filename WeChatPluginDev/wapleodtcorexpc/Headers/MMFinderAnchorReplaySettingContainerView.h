//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, MMWebImageView, NSString, UITapGestureRecognizer;

@interface MMFinderAnchorReplaySettingContainerView : UIView
{
    _Bool _isChargableLive;
    _Bool _isMemberLive;
    unsigned int _replayState;
    CDUnknownBlockType _actionBlock;
    MMWebImageView *_coverImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMUIButton *_createButton;
    MMUILabel *_subTitleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSString *_liveCoverUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
@property(nonatomic) _Bool isMemberLive; // @synthesize isMemberLive=_isMemberLive;
@property(nonatomic) _Bool isChargableLive; // @synthesize isChargableLive=_isChargableLive;
@property(nonatomic) unsigned int replayState; // @synthesize replayState=_replayState;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)createReplayAction;
- (void)updateCreateButton;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateData:(unsigned int)arg1 isMemberLive:(_Bool)arg2 isChargableLive:(_Bool)arg3 liveCoverUrl:(id)arg4;

@end

