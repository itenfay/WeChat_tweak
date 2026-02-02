//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderVideoBasisModel;

@interface WCFinderVideoPropertyModel : NSObject
{
    WCFinderVideoBasisModel *_basisModel;
    unsigned long long _colorIndex;
    unsigned long long _lensCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lensCount; // @synthesize lensCount=_lensCount;
@property(nonatomic) unsigned long long colorIndex; // @synthesize colorIndex=_colorIndex;
@property(retain, nonatomic) WCFinderVideoBasisModel *basisModel; // @synthesize basisModel=_basisModel;

@end

