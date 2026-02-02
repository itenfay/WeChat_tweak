//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UILabel;
@protocol WCFinderCommentSearchMentionHeaderViewDelegate;

@interface WCFinderCommentSearchMentionHeaderView : UIView
{
    UILabel *_titleLabel;
    MMUIButton *_closeBtn;
    id <WCFinderCommentSearchMentionHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderCommentSearchMentionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didClickClose:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

