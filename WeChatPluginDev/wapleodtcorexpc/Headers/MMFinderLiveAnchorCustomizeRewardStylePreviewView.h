//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGFile, PAGView;

@interface MMFinderLiveAnchorCustomizeRewardStylePreviewView : UIView
{
    PAGFile *_previewPagFile;
    PAGView *_previewPagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *previewPagView; // @synthesize previewPagView=_previewPagView;
@property(retain, nonatomic) PAGFile *previewPagFile; // @synthesize previewPagFile=_previewPagFile;
- (void)addAlphaMask:(id)arg1;
- (void)updateCurrentPAGComposition:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

