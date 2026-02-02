//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString;

@interface MMDeviceHeadImageView : UIView
{
    MMWebImageView *m_headView;
    _Bool m_borderRadius;
    _Bool _isRound;
    struct CGSize m_headSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRound; // @synthesize isRound=_isRound;
@property(nonatomic) struct CGSize m_headSize; // @synthesize m_headSize;
- (void)onLoadImageOK:(id)arg1;
- (void)reset;
- (void)setDeviceIconUrl:(id)arg1;
- (void)layoutSubviews;
- (void)setUpdateUrl:(id)arg1;
- (void)SetHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage:(id)arg1;
- (void)TrySetDefaultHeadImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

