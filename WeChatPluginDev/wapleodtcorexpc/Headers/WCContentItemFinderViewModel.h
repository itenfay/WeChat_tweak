//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifeShareCoverImageViewModel, WCFinderShareToMomentsItem;

@interface WCContentItemFinderViewModel : NSObject
{
    _Bool _isVideoFeed;
    unsigned int _style;
    unsigned int _mediaCount;
    unsigned int _totalDuration;
    unsigned long long _mediaType;
    NSString *_thumbUrl;
    WCFinderShareToMomentsItem *_shareItem;
    NewLifeShareCoverImageViewModel *_newlifeViewModel;
    struct CGSize _fittingSize;
    struct CGSize _thumbSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeShareCoverImageViewModel *newlifeViewModel; // @synthesize newlifeViewModel=_newlifeViewModel;
@property(retain, nonatomic) WCFinderShareToMomentsItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) unsigned int totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(nonatomic) unsigned int mediaCount; // @synthesize mediaCount=_mediaCount;
@property(nonatomic) _Bool isVideoFeed; // @synthesize isVideoFeed=_isVideoFeed;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (struct CGSize)fittingSizeForNewLifeWithWidth:(double)arg1 andHeight:(double)arg2;
- (struct CGSize)fittingSizeWithCoverType:(unsigned long long)arg1 withWidth:(double)arg2 andHeight:(double)arg3;
- (struct CGSize)fittingSizeWithCoverItem:(id)arg1;
- (_Bool)isMemberShipFeed;
- (id)getShareItem:(id)arg1;
- (id)initWithContentItem:(id)arg1;
- (id)debugDescription;

@end

