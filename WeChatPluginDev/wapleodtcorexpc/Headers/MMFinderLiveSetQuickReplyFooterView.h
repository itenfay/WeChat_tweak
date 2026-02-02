//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUIButton, MMUIImageView, MMUILabel, NSString, UIView;

@interface MMFinderLiveSetQuickReplyFooterView : UITableViewHeaderFooterView
{
    CDUnknownBlockType _addButtonBlock;
    UIView *_addContentView;
    MMUIImageView *_addImageView;
    MMUILabel *_addLabel;
    MMUIButton *_addButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) MMUILabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain, nonatomic) MMUIImageView *addImageView; // @synthesize addImageView=_addImageView;
- (void)setAddButtonBlock:(CDUnknownBlockType)arg1;
- (void)addButtonClick:(id)arg1;
@property(readonly, nonatomic) UIView *addContentView;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

