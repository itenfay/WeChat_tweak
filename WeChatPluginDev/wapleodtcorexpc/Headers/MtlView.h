//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol AppleViewDelegate;

@interface MtlView : UIView
{
    id <AppleViewDelegate> delegate;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) id <AppleViewDelegate> delegate; // @synthesize delegate;
- (void)didMoveToWindow;
- (void)onResize:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

