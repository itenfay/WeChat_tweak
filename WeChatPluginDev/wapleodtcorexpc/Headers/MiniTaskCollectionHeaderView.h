//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, MMUILabel, NSString;
@protocol MiniTaskCollectionHeaderViewDelegate;

@interface MiniTaskCollectionHeaderView : UICollectionReusableView
{
    id <MiniTaskCollectionHeaderViewDelegate> _delegate;
    long long _section;
    NSString *_title;
    MMUILabel *_titleLabel;
    MMUIButton *_editButton;
    MMUIButton *_deleteAllButton;
    MMUIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *deleteAllButton; // @synthesize deleteAllButton=_deleteAllButton;
@property(retain, nonatomic) MMUIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <MiniTaskCollectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectAtEndEdit;
- (void)onSelectAtBeginEdit;
- (void)onSelectAtDeleteAll;
- (void)updateWithSectionModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

