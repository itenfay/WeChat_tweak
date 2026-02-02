//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface WCFinderNearbyMoreLiveCellPlayModel : NSObject
{
    NSIndexPath *_leftPlayingIndexPath;
    NSIndexPath *_rightPlayingIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *rightPlayingIndexPath; // @synthesize rightPlayingIndexPath=_rightPlayingIndexPath;
@property(retain, nonatomic) NSIndexPath *leftPlayingIndexPath; // @synthesize leftPlayingIndexPath=_leftPlayingIndexPath;
- (_Bool)containIndexPath:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

