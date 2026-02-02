//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMFinderLiveConnectMicPKInfo, MMLiveIconButton, UIButton, UILabel;

@interface MMFinderLiveConnectMicTeamPkFooterActionView : UICollectionReusableView
{
    _Bool _isApplicant;
    CDUnknownBlockType _pkBlock;
    CDUnknownBlockType _quitMicBlock;
    MMLiveIconButton *_pkButton;
    UIButton *_closeMicButton;
    UILabel *_waitPkStartLabel;
    MMFinderLiveConnectMicPKInfo *_pkInfo;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicant; // @synthesize isApplicant=_isApplicant;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo; // @synthesize pkInfo=_pkInfo;
@property(retain, nonatomic) UILabel *waitPkStartLabel; // @synthesize waitPkStartLabel=_waitPkStartLabel;
@property(retain, nonatomic) UIButton *closeMicButton; // @synthesize closeMicButton=_closeMicButton;
@property(retain, nonatomic) MMLiveIconButton *pkButton; // @synthesize pkButton=_pkButton;
@property(copy, nonatomic) CDUnknownBlockType quitMicBlock; // @synthesize quitMicBlock=_quitMicBlock;
@property(copy, nonatomic) CDUnknownBlockType pkBlock; // @synthesize pkBlock=_pkBlock;
- (void)onCloseMic;
- (void)onPkAction;
- (void)layoutSubviews;
- (void)initViews;
- (void)update:(id)arg1 isApplicant:(_Bool)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

