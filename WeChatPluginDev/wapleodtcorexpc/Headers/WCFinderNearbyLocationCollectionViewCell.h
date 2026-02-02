//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, RichTextView, UIImageView;
@protocol WCFinderNearbyLocationCellDelegate;

@interface WCFinderNearbyLocationCollectionViewCell : UICollectionViewCell
{
    id <WCFinderNearbyLocationCellDelegate> _delegate;
    UIImageView *_locationImageView;
    RichTextView *_hintTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *hintTextView; // @synthesize hintTextView=_hintTextView;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(nonatomic) __weak id <WCFinderNearbyLocationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

