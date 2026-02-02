//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderProgressBarStatusInfo;

@interface WCFinderContentVMShareModel : NSObject
{
    WCFinderProgressBarStatusInfo *_progressBarStatusInfo;
    NSArray *_carouselJumpInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *carouselJumpInfoList; // @synthesize carouselJumpInfoList=_carouselJumpInfoList;
@property(nonatomic) __weak WCFinderProgressBarStatusInfo *progressBarStatusInfo; // @synthesize progressBarStatusInfo=_progressBarStatusInfo;

@end

