//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@interface KidsWatchButton : UIButton
{
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)changeForStrongStyle;
- (void)changeForWeakStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

