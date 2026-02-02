//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WANativeScrollView : UIView
{
    UIView *_contentView;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)getChildView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)addSubview:(id)arg1;
- (id)createContent;

@end

