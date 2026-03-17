//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLocatingCoordinateLogic;

@interface NewLifeGetSearchLbsLocationHandler : NSObject
{
    MMLocatingCoordinateLogic *_locationLogic;
}

@property(retain, nonatomic) MMLocatingCoordinateLogic *locationLogic; // @synthesize locationLogic=_locationLogic;
- (void)handleRequest:(id)arg1;

@end

