//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCEditImageSafeAreaScrollView, WCFinderCoverBasePreviewView;

@interface WCFinderCoverBackGroundView : UIView
{
    WCFinderCoverBasePreviewView *_previewView;
    WCEditImageSafeAreaScrollView *_eIScrollView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCEditImageSafeAreaScrollView *eIScrollView; // @synthesize eIScrollView=_eIScrollView;
@property(nonatomic) __weak WCFinderCoverBasePreviewView *previewView; // @synthesize previewView=_previewView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

