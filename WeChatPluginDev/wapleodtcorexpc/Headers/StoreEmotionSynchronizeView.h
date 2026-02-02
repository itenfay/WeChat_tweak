//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface StoreEmotionSynchronizeView : UIView
{
    UILabel *_statusLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (_Bool)isOnWifi;
- (void)updateView;
- (void)configStatusLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

