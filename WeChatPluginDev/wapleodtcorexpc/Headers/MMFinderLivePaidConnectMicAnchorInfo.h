//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo;

@interface MMFinderLivePaidConnectMicAnchorInfo : NSObject
{
    double _serviceRating;
    FinderJumpInfo *_historyJumpInfo;
    FinderJumpInfo *_ratingJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *ratingJumpInfo; // @synthesize ratingJumpInfo=_ratingJumpInfo;
@property(retain, nonatomic) FinderJumpInfo *historyJumpInfo; // @synthesize historyJumpInfo=_historyJumpInfo;
@property(nonatomic) double serviceRating; // @synthesize serviceRating=_serviceRating;

@end

