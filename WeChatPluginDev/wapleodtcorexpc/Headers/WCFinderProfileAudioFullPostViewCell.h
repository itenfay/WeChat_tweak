//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, RichTextView;
@protocol WCFinderProfileAudioFullPostViewCellDataSource, WCFinderProfileAudioFullPostViewCellDelegate;

@interface WCFinderProfileAudioFullPostViewCell : UICollectionViewCell
{
    id <WCFinderProfileAudioFullPostViewCellDelegate> _delegate;
    id <WCFinderProfileAudioFullPostViewCellDataSource> _dataSource;
    RichTextView *_stateLabel;
    RichTextView *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) RichTextView *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(nonatomic) __weak id <WCFinderProfileAudioFullPostViewCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderProfileAudioFullPostViewCellDelegate> delegate; // @synthesize delegate=_delegate;
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

