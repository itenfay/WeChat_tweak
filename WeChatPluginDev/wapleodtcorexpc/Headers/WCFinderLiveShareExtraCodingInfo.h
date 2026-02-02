//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveCoverInfo, LiveSdkInfo, NSMutableArray;

@interface WCFinderLiveShareExtraCodingInfo : NSObject
{
    LiveSdkInfo *_liveSdkInfo;
    FinderLiveCoverInfo *_coverInfo;
    NSMutableArray *_entranceAdInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *entranceAdInfos; // @synthesize entranceAdInfos=_entranceAdInfos;
@property(retain, nonatomic) FinderLiveCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @synthesize liveSdkInfo=_liveSdkInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

