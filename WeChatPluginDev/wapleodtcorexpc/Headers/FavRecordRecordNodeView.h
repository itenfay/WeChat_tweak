//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface FavRecordRecordNodeView : NSObject
{
    MMUILabel *m_titleLabel;
    MMUILabel *m_detailLabel;
}

+ (double)heightForNodeWithDesc:(id)arg1;
- (void)updateBkgImage:(_Bool)arg1;
- (void)LongPressEvents;
- (void)onTouchCancel;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)addContentSubView;
- (void)layoutSubviews;

@end

