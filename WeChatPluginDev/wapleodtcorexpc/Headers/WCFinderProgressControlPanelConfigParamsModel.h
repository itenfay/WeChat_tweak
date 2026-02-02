//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderFeedContentVM, WCFinderTableViewParamModel;

@interface WCFinderProgressControlPanelConfigParamsModel : NSObject
{
    _Bool _forbidProgressBarMovAnim;
    _Bool _isLandscape;
    _Bool _hasCompletelyPlay;
    WCFinderFeedContentVM *_contentVM;
    double _currentPlayPosition;
    double _videoDuration;
    WCFinderTableViewParamModel *_tableViewParamModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTableViewParamModel *tableViewParamModel; // @synthesize tableViewParamModel=_tableViewParamModel;
@property(nonatomic) _Bool hasCompletelyPlay; // @synthesize hasCompletelyPlay=_hasCompletelyPlay;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool forbidProgressBarMovAnim; // @synthesize forbidProgressBarMovAnim=_forbidProgressBarMovAnim;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double currentPlayPosition; // @synthesize currentPlayPosition=_currentPlayPosition;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;

@end

