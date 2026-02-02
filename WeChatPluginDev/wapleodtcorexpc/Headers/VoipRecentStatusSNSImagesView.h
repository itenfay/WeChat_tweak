//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, VoipRecentStatusImagesView;

@interface VoipRecentStatusSNSImagesView : UIView
{
    _Bool _shouldPlaySound;
    _Bool _isSoundBtnHidden;
    _Bool _isVisable;
    CDUnknownBlockType _didSlideImagesCallback;
    NSArray *_mediaItems;
    VoipRecentStatusImagesView *_imagesView;
    NSMutableArray *_dotViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) VoipRecentStatusImagesView *imagesView; // @synthesize imagesView=_imagesView;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(copy, nonatomic) CDUnknownBlockType didSlideImagesCallback; // @synthesize didSlideImagesCallback=_didSlideImagesCallback;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(nonatomic) _Bool isSoundBtnHidden; // @synthesize isSoundBtnHidden=_isSoundBtnHidden;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

