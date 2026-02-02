//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, EditVideoAttr, NSArray, NSString, WCFinderVideoQualityScoreModel;

@interface WCFinderGenOptionParams : NSObject
{
    _Bool _isSlowMotionVideo;
    WCFinderVideoQualityScoreModel *_videoScoreModel;
    EditVideoAttr *_editAttr;
    NSArray *_selectedAssetIDs;
    AVAsset *_fromAvAsset;
    NSString *_postFinderUsername;
    NSString *_originalVideoPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *originalVideoPath; // @synthesize originalVideoPath=_originalVideoPath;
@property(copy, nonatomic) NSString *postFinderUsername; // @synthesize postFinderUsername=_postFinderUsername;
@property(retain, nonatomic) AVAsset *fromAvAsset; // @synthesize fromAvAsset=_fromAvAsset;
@property(nonatomic) _Bool isSlowMotionVideo; // @synthesize isSlowMotionVideo=_isSlowMotionVideo;
@property(retain, nonatomic) NSArray *selectedAssetIDs; // @synthesize selectedAssetIDs=_selectedAssetIDs;
@property(retain, nonatomic) EditVideoAttr *editAttr; // @synthesize editAttr=_editAttr;
@property(retain, nonatomic) WCFinderVideoQualityScoreModel *videoScoreModel; // @synthesize videoScoreModel=_videoScoreModel;

@end

