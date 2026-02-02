//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel;
@protocol CustomEmoticonConflictViewDelegate;

@interface EmoticonCustomConflictView : UICollectionReusableView
{
    unsigned long long _limit;
    UILabel *_m_comflictWordingLabel;
    UIButton *_m_closeButton;
    id <CustomEmoticonConflictViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CustomEmoticonConflictViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIButton *m_closeButton; // @synthesize m_closeButton=_m_closeButton;
@property(retain, nonatomic) UILabel *m_comflictWordingLabel; // @synthesize m_comflictWordingLabel=_m_comflictWordingLabel;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void)onClickClose;
- (void)setDelegate:(id)arg1;
- (void)initCloseButton;
- (void)initComflictWordingLabel;
- (void)initView;
- (void)layoutWithSize:(struct CGSize)arg1;

@end

