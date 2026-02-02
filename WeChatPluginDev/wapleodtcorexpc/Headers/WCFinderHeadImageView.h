//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView;
@protocol WCFinderHeadImageViewDelegate;

@interface WCFinderHeadImageView : UIView
{
    _Bool _useInnerEdgeStyle;
    _Bool _autoUpdateImage;
    _Bool _isDefaultImageDisabled;
    _Bool _loadImageSuccessful;
    UIImageView *_headImageView;
    id <WCFinderHeadImageViewDelegate> _delegate;
    unsigned long long _displayStyle;
    NSString *_finderKey;
    NSString *_currentImageURL;
    NSString *_currentDownloadKey;
    UIImage *_headerDefaultImage;
    NSString *_rawImageURL;
    unsigned long long _targetSize;
}

+ (void)setMediumAvatar:(id)arg1 toImageView:(id)arg2;
+ (id)getDefaultImage:(struct CGSize)arg1;
+ (void)saveImageData:(id)arg1 URLString:(id)arg2;
+ (id)getLocalImageWithURLString:(id)arg1;
+ (_Bool)isCacheImageWithURLString:(id)arg1;
+ (_Bool)isCacheImageWithContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) _Bool loadImageSuccessful; // @synthesize loadImageSuccessful=_loadImageSuccessful;
@property(copy, nonatomic) NSString *rawImageURL; // @synthesize rawImageURL=_rawImageURL;
@property(retain, nonatomic) UIImage *headerDefaultImage; // @synthesize headerDefaultImage=_headerDefaultImage;
@property(copy, nonatomic) NSString *currentDownloadKey; // @synthesize currentDownloadKey=_currentDownloadKey;
@property(copy, nonatomic) NSString *currentImageURL; // @synthesize currentImageURL=_currentImageURL;
@property(nonatomic) _Bool isDefaultImageDisabled; // @synthesize isDefaultImageDisabled=_isDefaultImageDisabled;
@property(nonatomic, getter=isAutoUpdateImage) _Bool autoUpdateImage; // @synthesize autoUpdateImage=_autoUpdateImage;
@property(copy, nonatomic) NSString *finderKey; // @synthesize finderKey=_finderKey;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) _Bool useInnerEdgeStyle; // @synthesize useInnerEdgeStyle=_useInnerEdgeStyle;
@property(nonatomic) __weak id <WCFinderHeadImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)finderHeadImageLoadSuccessfulWithImage:(id)arg1 targetSize:(unsigned long long)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)headImageViewDidClick;
- (void)updateImageWithHeadURLString:(id)arg1 targetSize:(unsigned long long)arg2 compleBlock:(CDUnknownBlockType)arg3;
- (void)updateImageWithHeadURLString:(id)arg1 targetSize:(unsigned long long)arg2;
- (void)updateImageWithContact:(id)arg1 targetSize:(unsigned long long)arg2;
- (id)getCurrentDisplayImageURL;
- (void)prepareForReuse;
- (void)resetDefaultImage;
- (id)getCurImage;
- (void)updateImageWith:(id)arg1;
- (void)updateImageWithHeadURLString:(id)arg1;
- (void)updateImageWithContact:(id)arg1;
- (void)updateRadius;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupUI;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAutoUpdateImage:(_Bool)arg1 isDefaultImageDisabled:(_Bool)arg2;
- (id)initWithAutoUpdateImage:(_Bool)arg1;
- (void)setDefaultImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

