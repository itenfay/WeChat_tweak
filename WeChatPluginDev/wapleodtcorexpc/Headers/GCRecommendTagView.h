//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class JumpInfo, MMWebImageView, UILabel;

@interface GCRecommendTagView : UIView
{
    MMWebImageView *_imgView;
    UILabel *_label;
    JumpInfo *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *imgView; // @synthesize imgView=_imgView;
- (void)configureWithChatroomTagInfo:(id)arg1 layout:(id)arg2;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect)arg1;

@end

