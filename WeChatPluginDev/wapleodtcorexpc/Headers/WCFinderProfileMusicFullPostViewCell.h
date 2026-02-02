//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, RichTextView, UIImageView;
@protocol WCFinderProfileMusicFullPostViewCellDelegate;

@interface WCFinderProfileMusicFullPostViewCell : UICollectionViewCell
{
    id <WCFinderProfileMusicFullPostViewCellDelegate> _delegate;
    UIImageView *_iconView;
    RichTextView *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderProfileMusicFullPostViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

