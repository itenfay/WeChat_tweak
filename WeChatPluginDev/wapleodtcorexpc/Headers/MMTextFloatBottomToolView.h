//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton;
@protocol MMTextFloatBottomToolViewDelegate;

@interface MMTextFloatBottomToolView
{
    UIButton *m_btnDetail;
    NSString *m_nsTipsUrl;
    id <MMTextFloatBottomToolViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMTextFloatBottomToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDetailBtnClicked;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1 TipUrl:(id)arg2;

@end

