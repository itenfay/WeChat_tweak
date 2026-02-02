//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, RichTextView, UIImageView;
@protocol WCFinderMoreHotContentBottomViewDelegate;

@interface WCFinderMoreHotContentBottomView : UITableViewHeaderFooterView
{
    id <WCFinderMoreHotContentBottomViewDelegate> _delegate;
    RichTextView *_richTextView;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(nonatomic) __weak id <WCFinderMoreHotContentBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickMoreHotContent;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateContentView:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

