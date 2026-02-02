//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class RichTextView, UILabel, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderStaticCoverInfoView;

@interface WCFinderVideoCardCollectionViewCell : UICollectionViewCell
{
    double _imageContainerHeight;
    RichTextView *_textView;
    WCFinderMediaInfo *_mediaInfo;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderFeedImageView *_imageContainer;
    WCFinderStaticCoverInfoView *_infoView;
    UILabel *_nicknameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) WCFinderFeedImageView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double imageContainerHeight; // @synthesize imageContainerHeight=_imageContainerHeight;
- (void)setImage:(id)arg1 isThumb:(_Bool)arg2;
- (void)reloadImage;
- (id)getLikeRightItemByDataItem:(id)arg1;
- (void)updateWithDataItem:(id)arg1 showLikeFlag:(_Bool)arg2;
- (void)adjustAllSubviews;
- (void)prepareForReuse;

@end

