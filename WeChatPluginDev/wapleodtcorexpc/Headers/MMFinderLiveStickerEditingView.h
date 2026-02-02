//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol MMFinderLiveStickerEditingViewDelegate;

@interface MMFinderLiveStickerEditingView : UIView
{
    id <MMFinderLiveStickerEditingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveStickerEditingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

