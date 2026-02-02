//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MFTitleViewDelegate;

@interface MFTitleView
{
}

- (void)updateTitleColor:(id)arg1 earpieceModeColor:(id)arg2 alpha:(double)arg3 animated:(_Bool)arg4;
- (void)updateTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)updateTitleColor:(id)arg1;
- (void)updateRightIconsWithColor:(id)arg1;
- (void)updateSilentMode;
- (void)updateLimitedMode;
- (void)updateNearMode;
- (void)updateSubviews;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <MFTitleViewDelegate> delegate;

@end

