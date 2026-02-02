//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, ColorGradientView, TextStateFullScreenCardContentView, TextStateMediaContainerView, TextStateModel;

@interface TextStateCompositeCardView : UIView
{
    unsigned int _masks;
    TextStateFullScreenCardContentView *_contentView;
    TextStateMediaContainerView *_mediaView;
    double _topPadding;
    double _bottomPadding;
    double _forceAspectRatio;
    TextStateModel *_textState;
    CContact *_contact;
    ColorGradientView *_topGradientView;
    ColorGradientView *_bottomGradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ColorGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) ColorGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
@property(nonatomic) double forceAspectRatio; // @synthesize forceAspectRatio=_forceAspectRatio;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) unsigned int masks; // @synthesize masks=_masks;
@property(retain, nonatomic) TextStateMediaContainerView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) TextStateFullScreenCardContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *bottomMaskView;
@property(readonly, nonatomic) UIView *topMaskView;
- (void)setUsername:(id)arg1 textState:(id)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initStates;
- (id)initWithFrame:(struct CGRect)arg1;

@end

