//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class MJTileReusableAttributes;

@interface MJReusableTileLayer : CALayer
{
    MJTileReusableAttributes *_reusableAttributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTileReusableAttributes *reusableAttributes; // @synthesize reusableAttributes=_reusableAttributes;
- (void)prepareForReuse;

@end

