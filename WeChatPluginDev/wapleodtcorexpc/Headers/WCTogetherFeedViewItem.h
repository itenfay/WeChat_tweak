//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSMutableDictionary, NSString, NSURL, WCContentItemFinderViewModel, WCDataItem, WCImageViewModel, WCMediaItem;
@protocol WCTogetherFeedViewItemDelegate;

@interface WCTogetherFeedViewItem : NSObject
{
    NSString *_togetherText;
    _Bool _canShowTextState;
    _Bool _locationClickable;
    _Bool _showsImageCount;
    _Bool _isPlayingVideo;
    _Bool _hasLinkIcon;
    NSMutableDictionary *_cachedHeightForTogetherText;
    Class _cellClass;
    WCDataItem *_dataItem;
    id <WCTogetherFeedViewItemDelegate> _delegate;
    CContact *_contact;
    NSString *_username;
    NSString *_displayName;
    NSArray *_togetherUsernames;
    NSString *_dateText;
    NSString *_displayLocation;
    NSString *_text;
    NSString *_textParserPattern;
    NSArray *_textRichStyles;
    NSArray *_imageViewModels;
    NSString *_imageCountText;
    WCMediaItem *_videoMediaItem;
    WCImageViewModel *_linkIconViewModel;
    NSURL *_linkIconURL;
    NSURL *_linkIconResourceIdentifier;
    NSString *_linkPlayIconSVGName;
    NSString *_linkTitle;
    NSString *_linkSubtitle;
    WCContentItemFinderViewModel *_finderViewModel;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCContentItemFinderViewModel *finderViewModel; // @synthesize finderViewModel=_finderViewModel;
@property(copy, nonatomic) NSString *linkSubtitle; // @synthesize linkSubtitle=_linkSubtitle;
@property(copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(copy, nonatomic) NSString *linkPlayIconSVGName; // @synthesize linkPlayIconSVGName=_linkPlayIconSVGName;
@property(retain, nonatomic) NSURL *linkIconResourceIdentifier; // @synthesize linkIconResourceIdentifier=_linkIconResourceIdentifier;
@property(retain, nonatomic) NSURL *linkIconURL; // @synthesize linkIconURL=_linkIconURL;
@property(retain, nonatomic) WCImageViewModel *linkIconViewModel; // @synthesize linkIconViewModel=_linkIconViewModel;
@property(nonatomic) _Bool hasLinkIcon; // @synthesize hasLinkIcon=_hasLinkIcon;
@property(nonatomic) _Bool isPlayingVideo; // @synthesize isPlayingVideo=_isPlayingVideo;
@property(retain, nonatomic) WCMediaItem *videoMediaItem; // @synthesize videoMediaItem=_videoMediaItem;
@property(nonatomic) _Bool showsImageCount; // @synthesize showsImageCount=_showsImageCount;
@property(copy, nonatomic) NSString *imageCountText; // @synthesize imageCountText=_imageCountText;
@property(copy, nonatomic) NSArray *imageViewModels; // @synthesize imageViewModels=_imageViewModels;
@property(copy, nonatomic) NSArray *textRichStyles; // @synthesize textRichStyles=_textRichStyles;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(copy, nonatomic) NSString *textParserPattern; // @synthesize textParserPattern=_textParserPattern;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool locationClickable; // @synthesize locationClickable=_locationClickable;
@property(copy, nonatomic) NSString *displayLocation; // @synthesize displayLocation=_displayLocation;
@property(copy, nonatomic) NSString *dateText; // @synthesize dateText=_dateText;
@property(copy, nonatomic) NSArray *togetherUsernames; // @synthesize togetherUsernames=_togetherUsernames;
@property(nonatomic) _Bool canShowTextState; // @synthesize canShowTextState=_canShowTextState;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCTogetherFeedViewItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void)didClickMediaItem:(id)arg1;
- (void)didClickContentDetail;
- (int)_photoTypeForContentItem:(id)arg1;
- (id)_safeURLWithString:(id)arg1;
- (void)stopPlayingVideo;
- (void)startPlayingVideo;
- (void)_loadContentForFinder;
- (id)createDefaultLinkImage:(struct CGSize)arg1;
- (void)_loadContentForLink;
- (void)_loadContentForVideo;
- (void)_loadContentForImages;
- (void)_loadContentForText;
- (void)loadContent;
- (void)didClickLocationInfo;
- (void)loadLocationInfo;
- (void)cacheHeight:(double)arg1 forTogetherTextWithWidth:(double)arg2;
- (double)cachedHeightForTogetherTextWithWidth:(double)arg1;
@property(readonly, nonatomic) NSMutableDictionary *cachedHeightForTogetherText; // @synthesize cachedHeightForTogetherText=_cachedHeightForTogetherText;
- (id)togetherTextForDataItem:(id)arg1;
- (id)togetherText;
- (void)loadTogetherContactsInfo;
- (void)didClickContactInfo;
- (id)_displayNameFromAdDataItem:(id)arg1;
- (_Bool)_isAdDataItem:(id)arg1;
- (id)_displayNameFromContact:(id)arg1;
- (id)_contactFromDataItem:(id)arg1;
- (void)loadContactInfo;
- (id)initWithDataItem:(id)arg1;

@end

