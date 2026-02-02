//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConcertTicketExternalNavigationInfo, MMFinderLiveConcertTicketWebPageShareInfo, NSArray, NSDate, NSString, UIColor;

@interface MMFinderLiveConcertTicketStyleItem : NSObject
{
    _Bool _usePageBackgroundBlurEffect;
    _Bool _isPaid;
    unsigned int _pricing;
    NSString *_resourceId;
    NSString *_transientStyleId;
    NSString *_pageBackgroundImageUri;
    NSString *_title;
    NSDate *_startTime;
    NSString *_anchorNicknameLine;
    unsigned long long _ticketId;
    NSString *_ticketBackgroundImageUri;
    NSString *_miniatureTicketBackgroundImageUri;
    NSString *_brandLogoImageUri;
    NSString *_qrCodeImageUri;
    UIColor *_textColor;
    UIColor *_ticketIdColor;
    UIColor *_primaryButtonTopLeftColor;
    UIColor *_primaryButtonBottomRightColor;
    UIColor *_primaryButtonForegroundColor;
    UIColor *_bottomButtonsForegroundColor;
    UIColor *_bottomSeparatorsForegroundColor;
    NSString *_nextQuoteButtonText;
    UIColor *_nextQuoteButtonBackgroundColor;
    UIColor *_nextQuoteButtonForegroundColor;
    NSArray *_quotes;
    NSString *_ticketHolderAvatarImageUri;
    NSString *_ticketHolderNickname;
    MMFinderLiveConcertTicketExternalNavigationInfo *_externalNavigationInfo;
    NSArray *_pageItems;
    MMFinderLiveConcertTicketWebPageShareInfo *_webPageShareInfo;
}

+ (id)styleItemWithTicketInfo:(id)arg1 resourceInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConcertTicketWebPageShareInfo *webPageShareInfo; // @synthesize webPageShareInfo=_webPageShareInfo;
@property(retain, nonatomic) NSArray *pageItems; // @synthesize pageItems=_pageItems;
@property(retain, nonatomic) MMFinderLiveConcertTicketExternalNavigationInfo *externalNavigationInfo; // @synthesize externalNavigationInfo=_externalNavigationInfo;
@property(nonatomic) unsigned int pricing; // @synthesize pricing=_pricing;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(retain, nonatomic) NSString *ticketHolderNickname; // @synthesize ticketHolderNickname=_ticketHolderNickname;
@property(retain, nonatomic) NSString *ticketHolderAvatarImageUri; // @synthesize ticketHolderAvatarImageUri=_ticketHolderAvatarImageUri;
@property(retain, nonatomic) NSArray *quotes; // @synthesize quotes=_quotes;
@property(retain, nonatomic) UIColor *nextQuoteButtonForegroundColor; // @synthesize nextQuoteButtonForegroundColor=_nextQuoteButtonForegroundColor;
@property(retain, nonatomic) UIColor *nextQuoteButtonBackgroundColor; // @synthesize nextQuoteButtonBackgroundColor=_nextQuoteButtonBackgroundColor;
@property(retain, nonatomic) NSString *nextQuoteButtonText; // @synthesize nextQuoteButtonText=_nextQuoteButtonText;
@property(retain, nonatomic) UIColor *bottomSeparatorsForegroundColor; // @synthesize bottomSeparatorsForegroundColor=_bottomSeparatorsForegroundColor;
@property(retain, nonatomic) UIColor *bottomButtonsForegroundColor; // @synthesize bottomButtonsForegroundColor=_bottomButtonsForegroundColor;
@property(retain, nonatomic) UIColor *primaryButtonForegroundColor; // @synthesize primaryButtonForegroundColor=_primaryButtonForegroundColor;
@property(retain, nonatomic) UIColor *primaryButtonBottomRightColor; // @synthesize primaryButtonBottomRightColor=_primaryButtonBottomRightColor;
@property(retain, nonatomic) UIColor *primaryButtonTopLeftColor; // @synthesize primaryButtonTopLeftColor=_primaryButtonTopLeftColor;
@property(retain, nonatomic) UIColor *ticketIdColor; // @synthesize ticketIdColor=_ticketIdColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *qrCodeImageUri; // @synthesize qrCodeImageUri=_qrCodeImageUri;
@property(retain, nonatomic) NSString *brandLogoImageUri; // @synthesize brandLogoImageUri=_brandLogoImageUri;
@property(retain, nonatomic) NSString *miniatureTicketBackgroundImageUri; // @synthesize miniatureTicketBackgroundImageUri=_miniatureTicketBackgroundImageUri;
@property(retain, nonatomic) NSString *ticketBackgroundImageUri; // @synthesize ticketBackgroundImageUri=_ticketBackgroundImageUri;
@property(nonatomic) unsigned long long ticketId; // @synthesize ticketId=_ticketId;
@property(retain, nonatomic) NSString *anchorNicknameLine; // @synthesize anchorNicknameLine=_anchorNicknameLine;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool usePageBackgroundBlurEffect; // @synthesize usePageBackgroundBlurEffect=_usePageBackgroundBlurEffect;
@property(retain, nonatomic) NSString *pageBackgroundImageUri; // @synthesize pageBackgroundImageUri=_pageBackgroundImageUri;
@property(retain, nonatomic) NSString *transientStyleId; // @synthesize transientStyleId=_transientStyleId;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;

@end

