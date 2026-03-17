//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVideoRoiConfigInfo : NSObject
{
    int _roiStrength;
    struct CGRect _roiRect;
}

@property(nonatomic) int roiStrength; // @synthesize roiStrength=_roiStrength;
@property(nonatomic) struct CGRect roiRect; // @synthesize roiRect=_roiRect;
- (id)initWithRoiConfigInfo:(struct RoiConfigInfo)arg1;

@end

