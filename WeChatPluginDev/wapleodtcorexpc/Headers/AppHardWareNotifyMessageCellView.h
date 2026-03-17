//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface AppHardWareNotifyMessageCellView : NSObject
{
    UIImageView *m_bgImageView;
    UIImageView *m_arrowImageView;
}

- (void)onTouchUpInside;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (id)getBackgroundImageHL;
- (id)getBackgroundImage;

@end

