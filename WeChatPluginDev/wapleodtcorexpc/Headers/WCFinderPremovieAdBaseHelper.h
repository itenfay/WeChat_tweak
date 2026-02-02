//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderAdPreMovieAdInfo, NSString;
@protocol WCFinderPremovieAdHelperDelegate;

@interface WCFinderPremovieAdBaseHelper : NSObject
{
    _Bool _isReadyToShow;
    _Bool _shouldCloseAfterFeedback;
    id <WCFinderPremovieAdHelperDelegate> _delegate;
    FinderAdPreMovieAdInfo *_premovieInfo;
    NSString *_cardId;
    NSString *_playId;
    unsigned long long _startExposeTimestamp;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startExposeTimestamp; // @synthesize startExposeTimestamp=_startExposeTimestamp;
@property(nonatomic) _Bool shouldCloseAfterFeedback; // @synthesize shouldCloseAfterFeedback=_shouldCloseAfterFeedback;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(copy, nonatomic) NSString *playId; // @synthesize playId=_playId;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(readonly, nonatomic) _Bool isReadyToShow; // @synthesize isReadyToShow=_isReadyToShow;
@property(retain, nonatomic) FinderAdPreMovieAdInfo *premovieInfo; // @synthesize premovieInfo=_premovieInfo;
@property(nonatomic) __weak id <WCFinderPremovieAdHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)reportDictWithReportScene:(long long)arg1;
- (void)closePremovieAd;
- (void)pausePremovieAd;
- (void)resumePremovieAd;
- (void)showPremovieAd;
- (void)clearCache;
- (id)genPremovieView:(id)arg1;
- (void)updateWithMultiMediaCell:(id)arg1;
- (id)initWithPremovieInfo:(id)arg1;

@end

