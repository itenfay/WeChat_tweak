//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPoiInteractionInfo, NSString, UIImage;

@interface WCFinderJustWatchFeedInfo : NSObject
{
    unsigned long long _type;
    NSString *_tid;
    NSString *_maskTips;
    NSString *_fullMaskTips;
    UIImage *_maskIcon;
    NSString *_scrollGuideTips;
    NSString *_fullScrollGuideTips;
    NSString *_sessionBuffer;
    FinderPoiInteractionInfo *_fromPoiInteraction;
}

+ (id)feedInfoForPoiInteraction:(id)arg1;
+ (id)infoWithFeedTid:(id)arg1 sessionBuffer:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderPoiInteractionInfo *fromPoiInteraction; // @synthesize fromPoiInteraction=_fromPoiInteraction;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *fullScrollGuideTips; // @synthesize fullScrollGuideTips=_fullScrollGuideTips;
@property(retain, nonatomic) NSString *scrollGuideTips; // @synthesize scrollGuideTips=_scrollGuideTips;
@property(retain, nonatomic) UIImage *maskIcon; // @synthesize maskIcon=_maskIcon;
@property(retain, nonatomic) NSString *fullMaskTips; // @synthesize fullMaskTips=_fullMaskTips;
@property(retain, nonatomic) NSString *maskTips; // @synthesize maskTips=_maskTips;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)init;
- (void)fillPageReportInfo:(id)arg1;
- (void)fillFeedUDFKVInfo:(id)arg1 forFeed:(id)arg2 isWatching:(_Bool)arg3;

@end

