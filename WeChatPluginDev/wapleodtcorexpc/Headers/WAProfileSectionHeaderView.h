//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton, UILabel;
@protocol WAProfileSectionHeaderViewDelegate;

@interface WAProfileSectionHeaderView : UITableViewHeaderFooterView
{
    unsigned int _type;
    UIButton *_contentButton;
    UILabel *_titleLabel;
    id <WAProfileSectionHeaderViewDelegate> _delegate;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAProfileSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviewsImmediately;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 type:(unsigned int)arg2;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

