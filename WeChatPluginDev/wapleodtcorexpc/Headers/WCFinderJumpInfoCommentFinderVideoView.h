//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WCFinderJumpInfo, WCFinderJumpInfoCommentFinderVideoViewModel;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderJumpInfoCommentFinderVideoView : UIView
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate;
    WCFinderJumpInfo *_jumpInfo;
    WCFinderJumpInfoCommentFinderVideoViewModel *_model;
    UIImageView *_videoCover;
    UIImageView *_playIcon;
    UIImageView *_likeIcon;
    UILabel *_likeCountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIImageView *likeIcon; // @synthesize likeIcon=_likeIcon;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UIImageView *videoCover; // @synthesize videoCover=_videoCover;
@property(retain, nonatomic) WCFinderJumpInfoCommentFinderVideoViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoInteractDelegate> interactDelegate; // @synthesize interactDelegate=_interactDelegate;
- (int)showPosition;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)didTapConverView;
- (void)_updateLayout;
- (void)_updateView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

