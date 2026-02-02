//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSNumber;

@interface WCFinderProfileRedPacketEventView : UIView
{
    NSNumber *_theStyle;
    struct CGSize _mIntrinsicContentSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize mIntrinsicContentSize; // @synthesize mIntrinsicContentSize=_mIntrinsicContentSize;
@property(retain, nonatomic) NSNumber *theStyle; // @synthesize theStyle=_theStyle;
- (void)onClickSelf;
- (void)onTapClose;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setupThinkStyle:(id)arg1;
- (void)setBigCardStyle;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)ensureStyle;
- (void)didMoveToSuperview;
@property(nonatomic) long long style;
- (id)initWithFrame:(struct CGRect)arg1;

@end

