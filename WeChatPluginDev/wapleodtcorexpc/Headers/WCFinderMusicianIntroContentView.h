//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView, WCFinderMultiMusicianInfoView, WCFinderSingleMusicianInfoView;
@protocol WCFinderMusicianIntroContentViewDelegate;

@interface WCFinderMusicianIntroContentView : UICollectionViewCell
{
    id <WCFinderMusicianIntroContentViewDelegate> _delegate;
    UIView *_topContentView;
    UILabel *_titleLabel;
    WCFinderSingleMusicianInfoView *_singleMusicianView;
    WCFinderMultiMusicianInfoView *_multiMusicianView;
}

+ (id)reuseIdentifier;
+ (double)cellHeightByWidth:(double)arg1 singerInfoArray:(id)arg2 expand:(_Bool)arg3;
+ (id)buildSingleMusicianViewByWidth:(double)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMultiMusicianInfoView *multiMusicianView; // @synthesize multiMusicianView=_multiMusicianView;
@property(retain, nonatomic) WCFinderSingleMusicianInfoView *singleMusicianView; // @synthesize singleMusicianView=_singleMusicianView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(nonatomic) __weak id <WCFinderMusicianIntroContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMultiMusicianCard:(id)arg1 singerInfo:(id)arg2;
- (void)onMultiMusicianClickSingerContact:(id)arg1;
- (void)onSingleMusicianClickSignatureAtText:(id)arg1;
- (void)onSingleMusicianSignatureExpand:(_Bool)arg1;
- (void)onSingleMusicianClickSingerContact:(id)arg1;
- (void)updateWithSingerInfoArray:(id)arg1 expand:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

