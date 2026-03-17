//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAMetalLayer.h>

@interface CAMetalLayer (Private)
- (void)setEDR:(id)arg1;
- (id)createHLGMetadata;
- (id)createEDRMetadataWithMinLuminance:(float)arg1 maxLuminance:(float)arg2 opticalOutputScale:(float)arg3;
- (void)setWantsEDR:(_Bool)arg1;
@end

