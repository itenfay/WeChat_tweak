//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol InternalFavorDescViewDelegate;

@interface InternalFavorDescView : UIView
{
    id <InternalFavorDescViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <InternalFavorDescViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)updateDescList:(id)arg1 selected:(_Bool)arg2 totalDiscount:(id)arg3;
- (void)onClick;
- (id)init;

@end

