//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveTabInfo;

@interface WCFinderLiveStreamJumpModel : NSObject
{
    _Bool _isFromLiveComple;
    WCFinderLiveTabInfo *_liveTab;
    NSString *_relatedWording;
}

+ (id)finderLiveStreamJumpModelFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFromLiveComple; // @synthesize isFromLiveComple=_isFromLiveComple;
@property(retain, nonatomic) NSString *relatedWording; // @synthesize relatedWording=_relatedWording;
@property(retain, nonatomic) WCFinderLiveTabInfo *liveTab; // @synthesize liveTab=_liveTab;
- (id)toFinderLiveStreamJumper;

@end

