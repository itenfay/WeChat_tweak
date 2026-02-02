//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPIPTextStateDescription;

@interface MMFinderLiveStateTextWidgetObj
{
    CDUnknownBlockType _getStateTextContainerSizeCallback;
    NSString *_text;
    WCPIPTextStateDescription *_textDescription;
    struct CGSize _sizeText;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize sizeText; // @synthesize sizeText=_sizeText;
@property(retain, nonatomic) WCPIPTextStateDescription *textDescription; // @synthesize textDescription=_textDescription;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) CDUnknownBlockType getStateTextContainerSizeCallback; // @synthesize getStateTextContainerSizeCallback=_getStateTextContainerSizeCallback;
- (id)maskColor;
- (id)textColor;
- (id)textFont;
- (struct CGSize)getMainVideoViewSize;
- (double)titleTextTop;
- (double)iconImageTop;
- (double)iconImageCenterPercent;
- (id)getCompositedIconImage:(id)arg1 withMaskImage:(id)arg2;
- (id)imageWithTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3 topMargin:(double)arg4 maskColor:(id)arg5;
- (id)getSnapshotUserBackImage;
- (void)refresh;
- (id)initWithTextDescription:(id)arg1 businessId:(id)arg2;

@end

