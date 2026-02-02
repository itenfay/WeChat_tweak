//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, NSString, UILabel;

@interface FavRecordLeftThumbRightLabelNodeView
{
    MMUIImageView *m_thumbView;
    NSString *m_titleText;
    NSString *m_detailText;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
}

- (void).cxx_destruct;
- (void)onClick;
- (void)updateBkgImage:(_Bool)arg1;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)initDetailLabel;
- (void)addContentSubView;

@end

