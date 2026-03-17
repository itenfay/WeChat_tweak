//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface OMJRenderView : UIView
{
    shared_ptr_85cde1ea _backingView;
}

@property(readonly, nonatomic) shared_ptr_85cde1ea backingView; // @synthesize backingView=_backingView;
- (void)layoutSubviews;
- (void)teardownIfNeeded;
- (void)dealloc;
- (id)initWithBackingView:(shared_ptr_85cde1ea)arg1;

@end

