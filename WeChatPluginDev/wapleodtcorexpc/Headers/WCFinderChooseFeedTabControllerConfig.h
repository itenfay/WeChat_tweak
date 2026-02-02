//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderFeedPickerParams;

@interface WCFinderChooseFeedTabControllerConfig : NSObject
{
    _Bool _isPlanePickerStyle;
    WCFinderFeedPickerParams *_params;
    double _cellHeightRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double cellHeightRatio; // @synthesize cellHeightRatio=_cellHeightRatio;
@property(retain, nonatomic) WCFinderFeedPickerParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool isPlanePickerStyle; // @synthesize isPlanePickerStyle=_isPlanePickerStyle;
- (id)init;

@end

