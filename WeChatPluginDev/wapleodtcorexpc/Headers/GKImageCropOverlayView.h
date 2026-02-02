//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIToolbar;

@interface GKImageCropOverlayView : UIView
{
    UIToolbar *toolbar;
    struct CGSize cropSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

