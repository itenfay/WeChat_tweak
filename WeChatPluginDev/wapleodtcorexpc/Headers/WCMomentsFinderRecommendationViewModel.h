//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSDate, NSString, UIColor, UIFont, WCFinderFeedMediaWrap, WCMomentsFinderRecommendationInfo, WCMomentsFinderRecommendationPlaceholderContext;

@interface WCMomentsFinderRecommendationViewModel : NSObject
{
    _Bool _showsSingleBannerText;
    _Bool _isUserTextTruncated;
    _Bool _Report_isFirstEnteringTimeline;
    WCMomentsFinderRecommendationInfo *_recommendationInfo;
    WCMomentsFinderRecommendationPlaceholderContext *_placeholderContext;
    NSString *_customizedSeparatorTipsText;
    double _paddingX;
    double _maxWidth;
    long long _style;
    UIFont *_bannerTextFont;
    NSString *_singleBannerText;
    NSString *_seeText;
    NSString *_fallbackSeeText;
    unsigned long long _userCount;
    NSArray *_usernames;
    NSArray *_usernamesForHeadImages;
    NSArray *_contactsForHeadImages;
    CContact *_contactForUserText;
    NSString *_userText;
    NSString *_userTextThatDisplayed;
    NSString *_fallbackUserText;
    long long _contentType;
    NSString *_contentTypeRichText;
    NSString *_contentTypePlainText;
    NSString *_contentTypeAccessibilityLabel;
    NSString *_contentTypeShorterRichText;
    NSString *_contentTypeShorterPlainText;
    NSString *_contentTypeShorterAccessibilityLabel;
    NSString *_contentTypePlainTextThatDisplayed;
    NSDate *_timeThatNavigatedToFinder;
    NSString *_Report_timelineSessionID;
    unsigned long long _Report_recommendationSessionIndex;
}

+ (id)viewModelWithRecommendationInfo:(id)arg1 placeholderContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long Report_recommendationSessionIndex; // @synthesize Report_recommendationSessionIndex=_Report_recommendationSessionIndex;
@property(copy, nonatomic) NSString *Report_timelineSessionID; // @synthesize Report_timelineSessionID=_Report_timelineSessionID;
@property(nonatomic) _Bool Report_isFirstEnteringTimeline; // @synthesize Report_isFirstEnteringTimeline=_Report_isFirstEnteringTimeline;
@property(retain, nonatomic) NSDate *timeThatNavigatedToFinder; // @synthesize timeThatNavigatedToFinder=_timeThatNavigatedToFinder;
@property(copy, nonatomic) NSString *contentTypePlainTextThatDisplayed; // @synthesize contentTypePlainTextThatDisplayed=_contentTypePlainTextThatDisplayed;
@property(readonly, copy, nonatomic) NSString *contentTypeShorterAccessibilityLabel; // @synthesize contentTypeShorterAccessibilityLabel=_contentTypeShorterAccessibilityLabel;
@property(readonly, copy, nonatomic) NSString *contentTypeShorterPlainText; // @synthesize contentTypeShorterPlainText=_contentTypeShorterPlainText;
@property(readonly, copy, nonatomic) NSString *contentTypeShorterRichText; // @synthesize contentTypeShorterRichText=_contentTypeShorterRichText;
@property(copy, nonatomic) NSString *contentTypeAccessibilityLabel; // @synthesize contentTypeAccessibilityLabel=_contentTypeAccessibilityLabel;
@property(readonly, copy, nonatomic) NSString *contentTypePlainText; // @synthesize contentTypePlainText=_contentTypePlainText;
@property(copy, nonatomic) NSString *contentTypeRichText; // @synthesize contentTypeRichText=_contentTypeRichText;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSString *fallbackUserText; // @synthesize fallbackUserText=_fallbackUserText;
@property(nonatomic) _Bool isUserTextTruncated; // @synthesize isUserTextTruncated=_isUserTextTruncated;
@property(copy, nonatomic) NSString *userTextThatDisplayed; // @synthesize userTextThatDisplayed=_userTextThatDisplayed;
@property(copy, nonatomic) NSString *userText; // @synthesize userText=_userText;
@property(retain, nonatomic) CContact *contactForUserText; // @synthesize contactForUserText=_contactForUserText;
@property(copy, nonatomic) NSArray *contactsForHeadImages; // @synthesize contactsForHeadImages=_contactsForHeadImages;
@property(copy, nonatomic) NSArray *usernamesForHeadImages; // @synthesize usernamesForHeadImages=_usernamesForHeadImages;
@property(copy, nonatomic) NSArray *usernames; // @synthesize usernames=_usernames;
@property(readonly, nonatomic) unsigned long long userCount; // @synthesize userCount=_userCount;
@property(readonly, nonatomic) NSString *fallbackSeeText; // @synthesize fallbackSeeText=_fallbackSeeText;
@property(readonly, copy, nonatomic) NSString *seeText; // @synthesize seeText=_seeText;
@property(readonly, copy, nonatomic) NSString *singleBannerText; // @synthesize singleBannerText=_singleBannerText;
@property(readonly, nonatomic) _Bool showsSingleBannerText; // @synthesize showsSingleBannerText=_showsSingleBannerText;
@property(readonly, nonatomic) UIFont *bannerTextFont; // @synthesize bannerTextFont=_bannerTextFont;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(readonly, nonatomic) double paddingX; // @synthesize paddingX=_paddingX;
@property(readonly, copy, nonatomic) NSString *customizedSeparatorTipsText; // @synthesize customizedSeparatorTipsText=_customizedSeparatorTipsText;
@property(readonly, nonatomic) WCMomentsFinderRecommendationPlaceholderContext *placeholderContext; // @synthesize placeholderContext=_placeholderContext;
@property(readonly, nonatomic) WCMomentsFinderRecommendationInfo *recommendationInfo; // @synthesize recommendationInfo=_recommendationInfo;
- (void)navigateToFinderPageFromViewController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cardDescriptionRichText;
@property(readonly, nonatomic) struct CGSize cardThumbMediaSize;
@property(readonly, nonatomic) WCFinderFeedMediaWrap *cardThumbMediaWrap;
@property(readonly, nonatomic) NSString *finderLogoColorName;
@property(readonly, nonatomic) UIColor *finderLogoColor;
@property(readonly, copy, nonatomic) NSString *finderLogoName;
- (void)adjustSplicingTexts;
- (id)initWithRecommendationInfo:(id)arg1 placeholderContext:(id)arg2;
- (void)initParamsForReporter;

@end

